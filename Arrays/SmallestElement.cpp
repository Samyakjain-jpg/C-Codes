#include<iostream>
using namespace std;

int main(){
    int arr[5]={30,1100,27,40,58};
    int largest = arr[0];
    for(int i=0; i<5;i++){
        if(arr[i]<largest ){
            largest = arr[i];
            
        }
    }
    cout<<"Smallest is "<<largest<<endl;
    
}