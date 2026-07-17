#include<iostream>
using namespace std;
int peakelement(int arr[],int n){
    int low=0,high=n-1;
    while(low<high){
        int mid=low+(high-low)/2;
        if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return arr[low];
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The peak element is: "<<peakelement(arr,n);
    return 0;
}