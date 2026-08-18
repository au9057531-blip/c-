#include<iostream>
using namespace std;
int main(){
    int n;
    int size;
    int target;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return 0;
        }
    }
    return -1;
}
