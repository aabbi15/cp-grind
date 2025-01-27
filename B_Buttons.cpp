#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    ll n;
    cin>>n;

    ll ans = n;

    for(ll i = 1; i < n ; i ++){

        ans += i * (n-i);
    }

    cout<<ans<<"\n";
}

int main(){
    int testno = 1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}