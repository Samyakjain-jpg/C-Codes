#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,1,2,4,5};
    int largest = arr[0];
    int smallest= arr[0];
    for(int i=0; i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];      
        }
        else if(arr[i]<smallest){ 
           smallest = arr[i];
        }
    }
    cout<<"largest is "<<largest <<" " <<"Smallest is "<<smallest<<endl;
    
}