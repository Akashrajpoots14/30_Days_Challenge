#include<bits/stdc++.h>
using namespace std;

void print(int a[],int i ,int j){
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
            cout<<"hh";
        }
    }
}

int main(){
    int i=3,j=3;
    int a[i][j] ={{1,2,3},{4,5,6},{7,8,9}};

    //ALgo Starts here

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
         }    
    }

   


    return 0;
}