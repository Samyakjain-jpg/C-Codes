#include <iostream>
using namespace std;
 int main(){
    int CheckNum;
    cout << "Enter the number" << endl;
    cin >> CheckNum;

    if(CheckNum % 2 == 0)
        cout<< "Prime";
    
    else cout<< "Odd";


    return 0;
 }