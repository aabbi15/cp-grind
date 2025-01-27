#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

bool helper(vector<ll>&arr, ll mid,ll maxi,ll sum){

    bool maxitaken = false;
    ll n = arr.size();

    double newavg = double((sum+mid))/n;

    // cout<<newavg/2<<"um \n";


    ll cnt = 0;

    for(auto it :arr){

        if(it == maxi && !maxitaken){
            maxitaken = true;
            continue;
        }

        if(it < (newavg/2)) cnt++;

        
    }

    // cout<<mid<<" "<<cnt<<"hi \n";
    if(cnt> n/2) return true;
    return false;

}

void solver(){
    int n;
    cin>>n;

    vector<ll> arr(n);

    for(int i = 0 ; i < n ;i ++){

        cin>>arr[i];
    }

    ll sum = 0 ;

    ll maxi = -1;

    for(auto it: arr) {
        
        sum+= it;
        maxi = max(it,maxi);
    }

    ll l = 0;
    ll r = 1e16;

    ll ans = -1;

    while(l<=r){

        ll mid = (l+r)/2;

        if(helper(arr,mid,maxi,sum)){

            r = mid-1;
            ans = mid;
        }

        else l = mid+1;
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