#include<iostream>
using namespace std;
void printhello(){
    cout<<"hello";
}
int main(){
    printhello();
}
#include<iostream>
using namespace std;
int multiply(int a,int b){
    int m=a*b;
    return m;
}
int main(){
   cout<< multiply(7,9);
}
#include<iostream>
using namespace std;
int divide(int a,int b){
    int f=a/b;
    return f;
}
int main(){
    cout<<divide(27,3);
}
#include<iostream>
using namespace std;
int factN(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
        
    }
    return fact;
}
int main(){
    cout<<"fact="<<factN(8);
     cout<<"fact="<<factN(11);
}