#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    ll n,k;
    cin>>n;
    cin>>k;

    vector<ll> arr(n);

    for(int i = 0  ;i < n ; i ++) cin>>arr[i];

    for(int i =0; i <  n  ; i ++){

        ll num = arr[i];

        bool flag = true;

        for(int j = 0 ; j < n ; j ++){

            if(j == i ) continue;

            else{

                ll diff = num-arr[j];

                if(abs(diff) % k == 0) {

                    flag = false;
                    // cout<<diff<<" "<<arr[i]<<" "<<i<<j<<"hih\n";
                    continue;
                };
            }
        }

        if (flag) {
            cout<<"YES\n"<<i+1<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}