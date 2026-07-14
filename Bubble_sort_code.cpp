#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {5,8,3,2,9,4};
    cout<<"original array:";
    for(int i=0;i<n;i++){
    cout<<arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
           
        }
    }
    cout<<endl;
    cout<<"sorted array:";

    for(int i=0;i<n;i++){
    cout<<arr[i];
    }
    return 0;
}