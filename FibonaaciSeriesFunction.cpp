#include <iostream>
using namespace std;
int fibonacci(int n)
{
   
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {   
        int totalSum = a + b;
        cout << totalSum << endl;

        a = b;
        b = totalSum;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) <<endl;
}