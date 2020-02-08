#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j;
    int target;
    
    cout<<"Enter the target :- ";
    cin>>target;

    while(1){
    j=0;
    int diff = target - arr[j];
    for(int i=j+1;i<n;i++){
        if(diff == arr[i]){
            cout<<"True"<<endl;
            exit(0);
        }
        if(i == n-1){
            j++;
        }        
    }
    }
    
}