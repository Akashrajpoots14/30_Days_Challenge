#include<bits/stdc++.h>
using namespace std;

int main(){

    string str ="ddhgliasbfvngivgovjkptmobnfdb";

    int freq[26];
    for(int i=0;i<26;i++){
        freq[i] = 0; 
    }


    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }

    char ans ='a';
    int maxfeq = 0;

    for(int i=0;i<26;i++){
        if(freq[i] > maxfeq){
            maxfeq = freq[i];
            ans = i + 'a';
        }
    }

    cout<<maxfeq<<" "<<ans<<endl;
    return 0;
}