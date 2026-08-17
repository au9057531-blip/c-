#include<iostream>
using namespace std;
class node{
    public:
     int data;
     node*next;

     node(int n){
        data=n;
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
        void push_back(int val){
               node*newnode=new node(val);
               if(head==NULL){
                head=tail=NULL;
                return;
                newnode->next=tail;
                tail=newnode;
               }
        }
        void push_front(int val){
            node*newnode=new node(val);
            if(head==NULL){
                head=tail=newnode;
                return;
            }else{
                 newnode->next=head;
                 head=newnode;
            }
        }
        void pop_front(){
            if(head==NULL){
                head=tail=NULL;
                return;
                
            }else{
                
            }
        }
};