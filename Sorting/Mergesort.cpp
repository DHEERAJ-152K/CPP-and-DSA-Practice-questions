#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low, int mid,int high){
    int left=low;
    int right=mid+1;
    int i;
    vector<int> temp;


    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
           temp.push_back(arr[left]);
           left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for( i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(int arr[],int low,int high){
    if(low>=high) return;

    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    int i,n;
    int arr[100];
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the values"<<endl;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted array:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    mergeSort(arr,0,n-1);

    cout<<"Sorted array:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}