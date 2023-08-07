#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr [4] = {23,4,5,6};

    cout<<"enter the key"<<endl;
    int key;
    cin>>key;

    bool found= search(arr,4,key);
    if(found){
        cout<<"key is found" <<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }
}

