#include <iostream>
using namespace std;
 int main(){
    int first = 1;
    int second =2;
    int third =3;

    if((first> = second) && (first>=third))
    cout<<first<<"greater";
    else if((second> = first) && (second>=third))
    cout<<second<<"greater";
    else 
    cout<<third<<"greater";
}