// question https://codeforces.com/problemset/problem/2020/C


//SOlution

/*

bitwise breakdown:
    b   c   a   |   d
    0   0   0   |   0
    0   0   1   |   1
    0   1   0   |   0
    0   1   1   |   0
    1   0   0   |   1
    1   0   1   |   1
    1   1   0   |   1
    1   1   1   |   0

    use this to calculate answer
*/
#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>


typedef long long ll;

using namespace std;


map<tuple<ll,ll,ll>,ll>mp;
 
   

void solver(){
    ll a = 0, b, c, d; cin >> b >> c >> d;
 
        for(ll i = 60; i >= 0; i--) {
            ll I = (((1ll << i) & b) != 0);
            ll J = (((1ll << i) & c) != 0); 
            ll K = (((1ll << i) & d) != 0); 
            ll X = mp[{I, J, K}];
            
            if(X == -1) {
                a = -1; break;
            }
            else a += X * (1ll << i);
        }
 
        cout << a << "\n";
}

int main(){
    ll testno;
    cin>>testno;
     mp[{0, 0, 0}] = 0;
    mp[{0, 0, 1}] = 1;
    mp[{0, 1, 0}] = 0;
    mp[{0, 1, 1}] = -1;
    mp[{1, 0, 0}] = -1;
    mp[{1, 0, 1}] = 0;
    mp[{1, 1, 0}] = 1;
    mp[{1, 1, 1}] = 0;
    while(testno--)
        solver();

    return 0;
}