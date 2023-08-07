#include<iostream>
using namespace std;

int main(){
    int arr[5]={800,110,278,400,11};
    int smallest = arr[0];
    int secondSmallest =arr[1];

    for(int i=1; i<5;i++){
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];     
        }
        else if(arr[i]<secondSmallest){
            secondSmallest = arr[i];
    }
    }
    cout<<"SecondSmallest is "<<secondSmallest<<endl;
}