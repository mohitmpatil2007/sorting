#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = {'a','z','x','z','y','b','e'};
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='x'){
            str.push_back(s[i]);
        }
    }
    cout<<"updated original array:"<<str<<endl;
    sort(str.begin(),str.end());
    cout<<"sorted array:"<<str;
    return 0; 
}