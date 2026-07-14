#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 8;
    int arr[n] = {5,3,2,0,4,0,2,0};
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]==0){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"updated array:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}