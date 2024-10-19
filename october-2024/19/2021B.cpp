#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>

typedef long long ll;


using namespace std;


void solver(){

    ll n , x;

    cin>>n>>x;

    vector<ll> arr(n);

    for(ll i= 0 ;i < n ; i ++){

        cin>>arr[i];


    }

    map<ll,ll> freq;
    ll currmaxi = -1;

    sort(arr.begin(), arr.end());

    for(auto it:arr){

        if(it == currmaxi+1) currmaxi = it;
        freq[it]++;
    }

    bool flag = true;

    while(flag){

        flag = false;

        for(ll i = 0 ; i < n ; i ++){

            ll it = arr[i];

            if(freq[it] > 1) flag = true;

            if(freq[it] >1){

                ll num  = it;
                freq[num]--;

                arr[i] = num+x;
                freq[num+x]++;

                if(num+x == currmaxi+1) currmaxi = num+x;
            }
        }
    }

    cout<<currmaxi+1<<endl;



}

int main(){
     
    int testno;
    cin>>testno;

    while(testno--)
        solver();
    
    return 0;
}