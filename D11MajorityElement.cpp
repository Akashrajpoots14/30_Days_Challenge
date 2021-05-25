#include<bits/stdc++.h>
using namespace std;

int ExpectedElement(int arr[], int n){

    int maj_idx = 0;
    int maj_cout = 1;

    for(int i=1;i<n;i++){
        if(arr[maj_idx] == arr[i])
            maj_cout++;
        else
            maj_cout--;

        if(maj_cout<=0){
            maj_cout = 1;
            maj_idx = i;
        }

    }
    return arr[maj_idx];
}

int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int exp = ExpectedElement(arr,n);

    // checking the expected element
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == exp)
            count++;
    }
    if(count >= n/2){
        cout<<"MAjority Element is "<<exp;
    }else{
        cout<<"No majority Element found";
    }



    return 0;
}