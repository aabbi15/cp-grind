#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>
#include<set>


typedef long long ll;

using namespace std;

void solver(){
    
    ll n;

    cin>>n;

    vector<ll> arr(n);

    for(int i =0  ;i < n ; i ++){

        cin>>arr[i];
    }

    unordered_map<ll,int> seen;

    vector<ll> last(n+1,0);

    // et<int> firsts;

    last[n-1] = 1;

    for(int i = n-1 ; i>=0 ; i --){

        last[i] = last[i+1];

        if(seen.find(arr[i]) != seen.end()) continue;

        seen[arr[i]] = 1;

        last[i]++;

    }

    unordered_map<ll,int> unseen;

    ll ans=0;

     for(int i =0  ;i < n ; i ++){


    if(unseen.find(arr[i]) != unseen.end()) continue;

        unseen[arr[i]] = 1;

        ans+= last[i];



     }



     cout<<ans<<"\n";
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}