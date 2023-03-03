#include<iostream>
using namespace std;
int bubblesort(int arr[100], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    return arr[i];
}

int main(){
    int arr[100],n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Unsorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

    cout<<"\nSorted array:"<<endl;
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}