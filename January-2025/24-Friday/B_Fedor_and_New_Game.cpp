#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    
    ll n,m,k;

    cin>>n>>m>>k;

    vector<ll> arr(m+2);

    for(int i= 1; i <= m+1 ; i ++) cin>>arr[i];

    ll apna = arr[m+1];
    ll ans = 0;

    for(int i = 1; i <= m ; i++){

        ll cnt = 0;
        for(int msk = 0 ; msk <=n ;msk++){

            ll mask = 1<<msk;
            

            if( ( (apna&mask) ^ (arr[i] & mask))) {
                
                // cout<< mask << " ";
                cnt++;
            }

        }

        if(cnt<=k) ans++;

        cout<<endl;
    }

    cout<<endl<<ans<<endl;

}

int main(){
    int testno =1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
