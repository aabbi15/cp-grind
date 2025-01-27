#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    
    ll a,b,n;
    
    cin>>a>>b>>n;

    ll cnt = 0;

    while(a<=n && b<=n){

        if(a<b){

            a += b;

        }

        else{
            b+=a;
        }

        cnt++;
    }

    cout<<cnt<<endl;
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}