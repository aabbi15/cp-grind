// QUESTION https://codeforces.com/problemset/problem/2014/D


#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    ll n,d,k;

    cin>>n>>d>>k;

    vector<int> arr(n+2,0);

    for(int i = 0 ; i < k ; i ++){

        ll l,r;

        cin>>l>>r;

        arr[l]++;
        arr[r+1]--;

    }

    for(int i = 1; i <=n+1 ; i++ ){

        arr[i] += arr[i-1];
    }


    ll mini = 1e16;
    ll ans1= 1;

    ll ans2 = 1;
    ll maxi = -1;

    ll currsum = 0;

    for(int i = 1; i <=d; i ++){

        currsum += arr[i];
    }

    maxi = currsum;
    mini = currsum;

    ll l = 2;
    ll r= d;

    while(r<=n){

        currsum+= arr[r];
        currsum -= arr[l];

        r++;
        l++;

        if(currsum > maxi){

            maxi = currsum;
            ans2 = l;
        }

        if(currsum < mini){

            mini = currsum;
            ans1 = l;
        }

    }

    cout<<ans1<<" "<<ans2<<"\n";
    



    
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}