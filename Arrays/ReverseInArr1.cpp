#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    int arr2[size];
    int j = 0;
    for(int i=size-1;i>-1;i--){
    arr2[j] = arr1[i];
    j++;
  }
for(int i=0;i<size;i++)
cout << arr2[i] << " ";
}