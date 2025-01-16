#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>

typedef long long ll;

using namespace std;

void solver(){
    ll n,m;

    cin>>n;

    unordered_map<ll,ll> m1,m2;//num,pow

    vector<ll> temp1(n),temp2(n);

    for(int i = 0 ; i < n ; i ++){

        cin>>temp1[i];
    }

    for(int i = 0 ; i < n ; i ++){


        ll num;
        cin>>num;

        m1[temp1[i]] = num;
    }

    cin>>m;

    for(int i = 0 ; i < m ; i ++){

        cin>>temp2[i];
    }

    for(int i = 0 ; i < m ; i ++){


        ll num;
        cin>>num;

        m2[temp2[i]] = num;
    }


    bool valid = true;
    for (auto &it : m2) {

        ll Cm = it.first;
        ll Dm = it.second;
        if (m1.find(Cm) == m1.end() || Dm > m1[Cm]) {
            valid = false; // If the condition fails, break the loop
            break;
        }
        if (Dm == m1[Cm]) {
            m1.erase(Cm); // Remove matching keys
        }
    }

    long long ans = 0;
    const int MOD = 998244353;

    if (valid) {
        ans = pow(2, m1.size()); // Compute 2^len(d1)
        ans %= MOD;
    }

    cout << ans << endl;
}
    





int main(){
    int testno = 1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}