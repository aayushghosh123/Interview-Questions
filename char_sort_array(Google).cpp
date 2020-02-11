/*
Given an array of strictly the characters 'R', 'G', and 'B', segregate the values of the array so that all the Rs come first, the Gs come second, and the Bs come last.
You can only swap elements of the array.

Do this in linear time.

For example, given the array ['G', 'B', 'R', 'R', 'B', 'R', 'G'], it should become ['R', 'R', 'R', 'G', 'G', 'B', 'B'].
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char c_array1[n] = {'\0'};
    char c_array2[n] = {'\0'};
    
    for(int i=0;i<n;i++){               //O(n)
        cout<<c_array2[i]<<endl;
    }

    for(int i=0;i<n;i++){
        cin>>c_array1[i];
    }

    int r=0,g=0,b=0;
    int x=0,y=0,z=0;


    for(int i=0;i<n;i++){                     //O(n)
        if(c_array1[i] == 'R'){
            r++;
        }
        else if(c_array1[i] == 'G'){
            g++;
        }
        else if(c_array1[i] == 'B'){
            b++;
        }
    }
    x = 0;
    y = r;
    z = r+g;

    int i=0;
    while(i != n){                             //O(n)
        if(c_array1[i] == 'R' && x < r){
            c_array2[x] = c_array1[i];
            x++;
            i++;
        }
        else if(c_array1[i] == 'G' && y < (r+g)){
            c_array2[y] = c_array1[i];
            y++;
            i++;
        }
        else if(c_array1[i] == 'B' && z < (r+g+b)){
            c_array2[z] = c_array1[i];
            z++;
            i++;
        }
    }
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<c_array2[i]<<" ";
    }
    cout<<"]";
}


// Final Time Complexity :- O(n)