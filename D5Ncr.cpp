<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorail=1;

    for (int i = 2; i <=n; i++)
    {
        factorail*=i;
    }
    return factorail;
    

}



int main(){

    int n,r;
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;

=======
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorail=1;

    for (int i = 2; i <=n; i++)
    {
        factorail*=i;
    }
    return factorail;
    

}



int main(){

    int n,r;
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;

>>>>>>> 4a366b601b76aa6035b2dbf9ee3b60b91b5d7b54
}