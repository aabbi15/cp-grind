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

    ll ans  = 0;

    cin>>n;

    for(ll i = 1; i <=n ; i ++) {

        ans += 1ll<<i;

        // cout<<ans<<endl;

    }


    cout<<ans<<endl;
}

int main(){
    int testno =1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}