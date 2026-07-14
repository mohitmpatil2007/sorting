#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {2,5,8,1,3,9};
    for(int ele : arr){
        cout<<ele;
        // cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    cout<<endl;
    cout<<"sorted array:";
     for(int ele : arr){
        cout<<ele;
    }
}
