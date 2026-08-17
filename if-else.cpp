#include<iostream>
using namespace std;
int main(){
    int age=25;
    if(age>=18){
       cout<< "you can vote";
    }else{
       cout<< "you can not";
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n";
    cin>>n;
    if(n%2==0){
        cout<<"it is an even n";
    }else{
        cout<<"it is an odd n";
    }
}

#include<iostream>
using namespace std;
int main(){
 int marks;
 cout<<"Enter the marks:";
 cin>>marks;
 if(marks>=90){
     cout<<"The student is in A grade";
 }else if(marks>=80){
     cout<<"the student is in B grade";
 }else if(marks<=80){
     cout<<"the student is in C garde";
 }
 
}