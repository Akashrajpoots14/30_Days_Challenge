#include<bits/stdc++.h>
using namespace std;

int getbit(int n, int pos){
    return ((n & (1<<pos))!=0) ;
}

int setBit(int n ,int pos){
    return (n | 1<<pos);
}

int clearBit(int n ,int pos){
    int mask = ~(1<<pos);
    return (mask & n);
}

int upDateBit(int n ,int pos ,int value){
        int mask = ~(1<<pos);
        n =  (mask & n);
        return (n | value<<pos);
}

 bool isPowerof2(int n){
     return (n && !(n & n-1));
 } 
 int numberOfOnces(int n){
     int count = 0;
     while (n)
     {
        n = n & (n-1);
        count++;
     }
     return count;
     
 }

int main(){

    
    //cout<<getbit(5,2);
    //cout<<setBit(5,1);
    //cout<<clearBit(5,2);
    //cout<<upDateBit(5,1,1);
    //cout<<isPowerof2(16);
    cout<<numberOfOnces(19);
    return 0;
}