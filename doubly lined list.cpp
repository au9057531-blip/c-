#include<iostream>
using namespace std;
class node{
  public:
       int data;
       node*next;
       node*prev;

       node(int val){
        data=val;
        next=prev=NULL;
       }
      };
      class doubly_list{
        public:
             node*head;
             node*tail;

             doubly_list(){
              head=tail=NULL;
             }

             void push_front(int val){
             node*newnode=new node(val);
            if(head==NULL){
              head=tail=newnode;
              return;
            }else{
              newnode->next=head;
              head->prev=newnode;
              head=newnode;
            }

             }
             void push_back(int val){
              node*newnode=new node(val);
              if(head==NULL){
                head=tail=newnode;
                return;
              }else{
                  newnode->prev=tail;
                  tail->next=newnode;
                  tail=newnode;
              }

              
             }
             void pop_front(){
              if(head==NULL){
                cout<<"Nothing can be deleted";
              }else{
                node*temp=head;
                head=head->next;
                if(head!=NULL){
                  head->prev=NULL;
                }
                temp->prev=NULL;
                 delete temp;
              }
             }
             void pop_back(){
              if(head==NULL){
                cout<<"nothing can be deleted";
              }else{
                node*temp=tail;
                tail=tail->next;
                if(tail!=NULL){
                  tail->next=NULL;
                }
                temp->prev=NULL;
                delete temp;
              }
             }
             void printll(){
              node*temp=NULL;
              while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
              }
             }
             
      };
      int main(){
        doubly_list ll;
        ll.push_front(1);
         ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
      }