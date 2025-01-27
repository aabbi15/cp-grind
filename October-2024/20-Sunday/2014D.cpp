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

    // vector<int> arr(n+2,0);

    vector<ll> ct(n + 2, 0);
        
        // Read the jobs and update the ct array for range updates
        for (int i = 0; i < k; i++) {
            ll L, R;
            cin >> L >> R;
            ct[max(1LL, L - d + 1)] += 1;
            ct[R + 1] -= 1;
        }
        
        // Variables to track the current sum, min and max overlaps
        ll cur = 0;
        ll mn = 1e16, mni = 0;
        ll mx = -1, mxi = 0;

        // Process the array using a sliding window approach
        for (int i = 1; i <= n - d + 1; i++) {
            cur += ct[i];
            if (cur < mn) {
                mn = cur;
                mni = i;
            }
            if (cur > mx) {
                mx = cur;
                mxi = i;
            }
        }
        
        // Output the results
        cout << mxi << " " << mni << "\n";
    



    
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}