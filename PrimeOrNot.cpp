#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool isDivisible = 0;

    for(int i=2; i<n; i++){
        if(n%i == 0){
            isDivisible = 1 ;
       }
    }
        if(!isDivisible){
            cout<<" prime number"<<endl;
        }
        else{
            cout<<"not prime number";

        }
}