#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {5,3,8,2,1,6};
    for(int ele:arr){
        cout<<ele;
    }
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]){
                break;
            }
            else{
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }
    cout<<endl;
     for(int ele:arr){
        cout<<ele;
    }
    return 0;
}