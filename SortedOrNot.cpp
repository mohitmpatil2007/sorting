#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,1,8,9};
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    bool val;
    for(int i=0;i<5;i++){
         val = true;
        for(int j=i+1;j<4;j++){
            if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            val = false;
            break;
            }
        }
    }
    if(val == true){
        cout<<"the array is sorted";
    }
    else{
        cout<<"the array is not sorted";
    }
    return 0;
}