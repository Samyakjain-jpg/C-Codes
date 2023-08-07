// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     for(int i=2; i<n; i++){
//         if(n%i == 0){
//             cout << "not prime"<< endl ;
//             exit(1);
//        }
//     }
//     cout<<" prime number"<<endl;
// }
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = n/2;

    for(int i=2; i<=s; i++){
        if(n%i == 0){
            cout << "not prime"<< endl ;
            exit(1);
       }
    }
    cout<<" prime number"<<endl;
}