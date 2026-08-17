#include<iostream>
using namespace std;
int main(){
    int count;
    while(count<=5){
        cout<<count;
        count++;
    }
}
#include <iostream>
using namespace std;

int main() {
    int count = 1;

    while (count <= 20) {
        if (count % 2 == 0) {
            cout << count << " ";
        }
        count++;
    }

    return 0;
}
#include<iostream>
using namespace std;
int main(){
   int n=3;
   int sum=0;
   for(int i=0;i<=n;i++){
       sum+=i;
   }
   cout<<"sum="<<sum;
  
}