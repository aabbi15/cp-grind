#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){

    ll k, n;

    cin>>n>>k;

    if (k * k <= n && n % 2 == k % 2) cout<<"YES\n";

    else cout<<"NO\n";
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}