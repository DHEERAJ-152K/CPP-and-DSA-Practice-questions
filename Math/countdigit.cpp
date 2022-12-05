#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n!=0){
        n=n/10; //divides the input number by 10 means it eliminating each bit till value is not equal to 0.
        count++;// increments each time it divides by 10.
    }
      cout<<"the count = "<<count<<endl;
      return 0;
}