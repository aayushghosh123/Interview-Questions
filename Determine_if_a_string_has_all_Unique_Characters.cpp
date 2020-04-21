#include<bits/stdc++.h>
using namespace std;

bool uniquecharacter(string s){
    int i=0;
    int length=0;

    while(s[i] !='\0'){
        length++;
        i++;
    }

    //cout<<length<<endl;

    sort(s.begin(),s.end());;

    for(i=0;i<length;i++){
        if(s[i] == s[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    int value = uniquecharacter(s);

    if(value == 0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
}