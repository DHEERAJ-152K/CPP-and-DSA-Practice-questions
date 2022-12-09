#include<bits/stdc++.h>
using namespace std;
int sumofn(int n){
    if(n==0)
        return 0;
    return n+sumofn(n-1); //BACTRACKING till 0 then print reverse..,
    
}

int main(){
    int n;
    cin>>n;
    cout<<sumofn(n);
    return 0;
    
}
