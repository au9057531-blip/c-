#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    public:
        node*head;
        node*tail;

        list(){
            head=tail=NULL;
        }
        void insertathead(int val){
                node*newnode=new node(val);
                 if(head==NULL){
                    head=tail=newnode;
                    tail->next=head;
                 }else{
                    newnode->next=head;
                    head=newnode;
                    tail->next=head;
                 }
        }
        void insertattail(int val){
        node*newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next=head;
        }else{
            newnode->next=head;
            tail->next=newnode;
            tail=newnode;
        }
        }
        void deleteathead(){
            if(head==NULL){
                cout<<"nothing can be deleted";
            }else{
                node*temp=head;
                head=head->next;
                tail->next=NULL;
                temp->next=NULL;

                delete temp;
            }
        }
        void deleteattail(){
            if(head==NULL){
                return;
            }else if(head==tail){
                delete head;
                head=tail=NULL;
            }else{
                node*temp=head;
                node*prev=head;
                while(prev->next!=tail){
                    prev=prev->next;
                }
                tail=prev;
                tail->next=head;
                temp->next=NULL;
                delete tail;

            }
        }
       
};
 int main(){
            list ll;
            ll.insertathead(1);
        }