//Implement integer exponentiation. That is, implement the pow(x, y) function, where x and y are integers and returns x^y.
// Do this faster than the naive method of repeated multiplication.

#include<bits/stdc++.h>
using namespace std;

int pow(long long int x,long long int y){
    int value=1;
    while(y--){
        value = value * x;
    }
    return value;
}

int main(){
    long long int x=0,y=0;
    cin>>x>>y;
    int p = pow(x,y);
    cout<<p<<endl;
}