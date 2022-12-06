#include<bits/stdc++.h>
using namespace std;
int main(){
    int gcd,a,b,min,GCD;
  while(true){
      cin>>a>>b;
    if(a<b){
        min=a;
    }else{
        min=b;
    }
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            GCD=i;
        }
    }
    cout<<GCD<<endl;
  }
}