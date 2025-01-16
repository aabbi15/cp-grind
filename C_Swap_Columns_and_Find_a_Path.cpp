#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    int n;


    cin>>n;

    vector<ll> row1(n);
    vector<ll> row2(n);

    ll ans = 0;


    for(int i = 0 ;i < n ; i ++){

        cin>>row1[i];

        
    }


    for(int i = 0 ;i < n ; i ++){

        cin>>row2[i];

        
    }

    int maxcol = 0;
    ll maxi = -1e8;

    for(int i = 0 ;i < n ; i ++){

        ll sum = row1[i] + row2[i];

        if(sum > maxi ){

            maxi = sum;
            maxcol = i;
        }
        
    }

    for(int i = 0 ;i < n ; i ++){


        // if(maxcol != i ){

            ll waah = max(row1[i],row2[i]);

            ans += waah;
        // }
        
    }

    ans+= min(row1[maxcol], row2[maxcol]);

    cout<<ans<<endl;



}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}