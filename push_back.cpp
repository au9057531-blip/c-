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
       void push_back(int val){
        node*newnode=new node(val);
        if(head==NULL){
            head=tail=NULL;
        }else{
              newnode->next=tail;
              newnode=tail;
        }
       }
       void pop_front(int ){
       
        if(head==NULL){
            return;
        }else{
            node*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
       }
      void printlistll(){
               node*temp=head;
               while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
               }
       }
};
int main(){
    list ll;
    ll.push_back(8);
    ll.push_back(7);
    ll.pop_front(6);
    ll.pop_front(3);
}
#include<iostream>
using namespace std;
class Node{
    public:
      int data;
      Node*Next;

      Node(int val){
        data=val;
        Next=NULL;
      }
};
class list{
      Node*head;
      Node*tail;
      public:
      list(){
        head=tail=NULL;
      }

        void push_front(int val){
            Node*newNode=new Node(val);
           
            if(head==NULL){
                head=tail=newNode;
                return;}
                else{
                    newNode->Next=head;
                    head=newNode;
                }
            }

            void printll(){
                Node*temp=head;
                while(temp!=NULL){
                    cout<<temp->data<<" ";
                    temp=temp->Next;
                }
            }
        };
      

int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    return;
}
