#include<bits/stdc++.h>
using namespace std;

int DuplicateMissing(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum ^ arr[i];
    }
    return sum;
}

int main(){

    int arr[] = {1,2,1,2,5};
    int n = 5;

    cout <<DuplicateMissing(arr,n);

    return 0;
}