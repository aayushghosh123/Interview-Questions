/*
Given a sorted array, A, with possibly duplicated elements, find the indices of the first and last occurrences of a target element, x.
Return -1 if the target is not found.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the size of the array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array :- "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first = 0,last = 0;
    int target=0,done;
    cout<<"Enter the target element :- ";
    cin>>target;
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i] == target && flag == 0){
            first = i;
            flag = 1;
            if(arr[first + 1] != target){
                flag = 0;
            }
        }
        if(arr[i] == target && flag == 1){
            if(arr[i+1] != target){
                last = i;
                done = 1;
            }
        }
    }
    if(done == 1)
    cout<<"["<<first<<","<<last<<"]";
    else
    cout<<"Not Found";
}
