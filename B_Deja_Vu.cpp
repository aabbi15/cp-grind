#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    ll n,q;
    cin>>n>>q;

    vector<ll> arr(n);
    vector<ll> query(q);

    for(int i  = 0 ; i < n ; i ++){

        cin>>arr[i];
    }

    for(int i  = 0 ; i < q ; i ++){

        cin>>query[i];
    }

    vector<ll> used(31);

    


    for(auto it: query){

        if(used[it] == 0){

            ll powa = 1LL<<it;


            for(ll i = 0 ; i < n;i ++){

                if(powa <= arr[i] && arr[i]%powa == 0){

                    arr[i] += (powa/2);
                }
                
            }

            used[it] = 1;
        }
    }

    for(auto it: arr) cout<<it<<" ";

    cout<<'\n';
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}