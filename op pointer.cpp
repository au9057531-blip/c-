#include<iostream>
using namespace std;
int main(){
    int a=10;
    int*ptr=&a;
    cout<<ptr;
    ptr++;
    cout<<ptr;
}
#include<iostream>
using namespace std;
int main(){
    int n=10;
    int*ptr1=&n;
    int**ptr2=&ptr1;
    cout<<ptr1<<endl;
    cout<<&n<<endl;
        cout<<&ptr2<<endl;
}
