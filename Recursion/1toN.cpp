#include<bits/stdc++.h>
using namespace std;
void printN(int n){
    if(n<=0){
        return;
    }
    printN(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    printN(n);
}