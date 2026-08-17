#include<iostream>
using namespace std;
int main(){
    int marks[5]={23,54,12,89,56};
    int size=5;
    for(int i=0;i<size;i++){
        cout<<marks[i];
    }
    cout<<marks[0];
    cout<<marks[2];
    return 0;
}