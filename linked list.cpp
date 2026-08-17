#include<iostream>
using namespace std;
class node{
       public:
       int data;
       node*next;

       node(int val){
        data=val;
        node*next=NULL;
       }

};
class list{
       public:
       node*head;
       node*tail;

       list(){
        head=tail=NULL;
       }
       void push_front(int val){
        node*newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }else{
            newnode->next=head;
             newnode=head;
        }
       }
       void push_back(int val){
        node*newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            newnode->next=tail;
            newnode=tail;
        }
       }
       void pop_front(){
        if(head==NULL){
            cout<<"nothing can be deleted";
        }else{
            node*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }
       void pop_back(){
        if(head==NULL){
            cout<<"nothing can be deleted";
            return;
        }else{
            node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=tail;
            delete tail;
            temp=tail;
        }
       }
    
       void printll(){
        node*temp=head;
        while(temp!=NULL){
        cout<<temp->next<<" ";
        temp=temp->next;
        }
       }
};
int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    
}
        