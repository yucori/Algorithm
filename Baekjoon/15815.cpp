#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    string str;
    stack<int>st;
    cin>>str;
    int len = str.length();
    for(int i=0; i<len; i++){
        int a = str[i];
        if(a!='+' && a!='*' && a!='/' && a!='-'){
            a = a-'0';
            st.push(a);
        }
        else{
            int b2 = st.top();
            st.pop();
            int b1 = st.top();
            st.pop();
            if(a == '+') st.push(b1+b2);
            else if(a == '-') st.push(b1-b2);
            else if(a == '*') st.push(b1*b2);
            else if(a == '/') st.push(b1/b2);
        }
    }
    cout<<st.top();
    return 0;
}