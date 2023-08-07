#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n = 153;
    int sum = 0;

    while(n>0){

    int unit = n%10;
    sum = sum + pow(unit,3);
    n = n/10;

    }
cout << sum << endl;

}