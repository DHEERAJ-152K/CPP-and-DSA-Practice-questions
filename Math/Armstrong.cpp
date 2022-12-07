#include<bits/stdc++.h>
using namespace std;
int armstrong(int num){
    int temp,count=0;
    temp=num;
    int originval=num;

    while(temp!=0){
        count++;
        temp=temp/10; //to eliminate last digit.

    }
    int sumofpow=0;
    while(num!=0){
       int  lastdig=num%10; //extract last digit.
       sumofpow=sumofpow+pow(lastdig,count); //Add cubes of extracted digit.
       num=num/10; //Eliminate last dgit.

    }
    return(sumofpow==originval);
}
int main(){
int num;
cin>>num;
if(armstrong(num)){
    cout<<"YES! IT IS ARMSTRONG..,"<<endl;
}else{
    cout<<"NO, NOT AN ARMSTRONG..,"<<endl;
}

}