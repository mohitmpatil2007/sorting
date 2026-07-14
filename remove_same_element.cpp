#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=5;
    int arr[n] = {5,8,4,16,9};
    cout<<"original array:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}