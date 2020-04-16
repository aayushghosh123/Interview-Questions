/*
This problem was recently asked by Twitter

Given a Roman numeral,
 find the corresponding decimal value. 
 Inputs will be between 1 and 3999.

Example:
Input: IX
Output: 9

Input: VII
Output: 7
*/

#include<bits/stdc++.h>
using namespace std;

int val(char s){
    if(s=='I')
    return 1;
    else if(s=='V')
    return 5;
    else if(s=='X')
    return 10;
    else if(s=='L')
    return 50;
    else if(s=='C')
    return 100;
    else if(s=='D')
    return 500;
    else if(s=='M')
    return 1000;

    return -1;
}

int main(){
    int total = 0;
    string s;
    cin>>s;
    int length = s.length();

    for(int i=0;i<length;i++){
        int curr = val(s[i]);
        if(i+1 < length){
            int next = val(s[i+1]);

            if(curr >= next){
                total = total + curr;
            }
            else if(next > curr){
                total = total + next - curr;
                i++;
            }
        }
        else{
            total = total + curr;
        }
    }
    cout<<total;
}