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
            cout<<"It is empty";
            return;
        }else{
            newnode->next=head;
            newnode=head;
        }
    }
     int search(int key){
        int idx=0;  
        node*temp=head;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }else{
                temp=temp->data;
                idx++;
            }
            return -1;
        }
    }
};
int main(){
      list ll;
      ll.push_front(2);
      ll.push_front(1);
      ll.push_front(3);
      cout<<ll.search(2);

}
