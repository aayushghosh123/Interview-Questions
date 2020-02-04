#include<bits/stdc++.h>
using namespace std;

bool arepair(char f,char s){
    if(s=='(' && f==')')
    return true;
    else if(s=='{' && f=='}')
    return true;
    else if(s=='[' && f==']')
    return true;
    else
    return false;
}

bool checkexpression(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i] == '('  || s[i] =='{' || s[i] =='['){
            st.push(s[i]);
        }
        if(s[i] == ')'  || s[i] =='}' || s[i] ==']'){
            if(st.empty() || !arepair(s[i],st.top()))
            return  false;
            else
            st.pop();
        }
    }
    return st.empty()? true:false;
}

int main(){
    string s;
    cout<<"Enter the expression :- ";
    cin>>s;
    if(checkexpression(s)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}