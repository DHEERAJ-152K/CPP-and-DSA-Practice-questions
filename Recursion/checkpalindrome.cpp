#include<bits/stdc++.h>
using namespace std;
bool str(int i, string s){
    if(i>=s.size()/2)
        return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return str(i+1,s);
}

int main(){
    string s="madasm";
    cout<<str(0,s);
    return 0;
}