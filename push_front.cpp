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
            head=newnode;
        }
    }
    void printll(){
          node*temp=head;
          while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
          }
    }

};
int main(){
    list ll;
    ll.push_front(7);
    ll.push_front(7);
    ll.push_front(7);
     ll.push_front(7);

}
