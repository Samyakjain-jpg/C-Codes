#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int fact = 1;
    // cin>>n;
    if (n < 0)
        cout << "not possible" << endl;
    else
    { 
        for (int i = 1; i <= n; i++)
            fact = fact *i;
        cout<< fact<< endl;
    }
}