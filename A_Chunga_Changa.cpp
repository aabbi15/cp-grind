#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    

    ll price;
    ll x,y;

    cin>>x>>y>>price;


    ll ans = (x+y)/price;

    ll rem1 = x%price;
    ll rem2 = y%price;

    ll ans2 = 0;

    if( (rem1+rem2) >=price){

        ll mini = min(rem1,rem2);

        ll maxi = max(rem1,rem2);

        ans2 = price - maxi;

    }

    cout<<ans<<" "<<ans2<<endl;
}

int main(){
    int testno = 1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}