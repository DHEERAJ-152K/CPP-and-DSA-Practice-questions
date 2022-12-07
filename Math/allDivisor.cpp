#include<bits/stdc++.h>
using namespace std;
void printdivisors(int num){
    int divisors=1;
   for (int i = 1; i <=num; i++)
   {
    if(num%i==0)
        cout<<i<<"\t";
   }
}
int main(){
    int num;
    cin>>num;
    printdivisors(num);
}
