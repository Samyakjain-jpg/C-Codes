#include <iostream>
using namespace std;
int main(){
    int n = 10;
    // cin>>n;

    int a = 0;
    int b = 1;

    for(int i = 0; i < n; i++){
        int fibonacci1 = a;
        int fibonacci = a+b;
        cout<<fibonacci1 << " " <<endl;
        a = b ;
        b = fibonacci;
    }
}