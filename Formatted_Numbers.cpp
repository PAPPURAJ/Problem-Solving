#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int s[100];
    cin>>n;

    int c=0;

    while(n){
        s[c++]=n%10;
        n/=10;
    }

    if(c<4){
        cout<<n;
        return 0;
    }

    int co=c%3;
    if(co==0)
    co=3;

    for(int i=0;i<c;i++){
        co--;
        cout<<s[c-1-i];
        if(co==0 && i+1!=c){
            cout<<",";
            co=3;
        }
    }
return 0;
}
