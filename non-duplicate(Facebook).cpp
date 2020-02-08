/*
Given a list of numbers, where every number shows up twice except for one number, find that one number.

Example:
Input: [4, 3, 2, 4, 1, 3, 2]
Output: 1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count[n] = {0};
    
    for(int i=0;i<n;i++){
        count[(arr[i])%10]++;
    }
    cout<<"The count of array is :- "<<endl;
    for(int i=0;i<n;i++){
        cout<<count[i]<<endl;
    }
    cout<<"The output is :- "<<endl;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            cout<<arr[i]<<endl;
        }
    }
}