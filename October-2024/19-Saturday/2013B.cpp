// QUESTION
// https://codeforces.com/problemset/problem/2013/B

//SOlution
/*
It can be noted that the value of an−1
 will always be negative in the final result.

Therefore, we can subtract the sum a1+a2+…+an−2
 from an−1
, and then subtract an−1
 from an
.

Thus, the final sum will be a1+a2+…+an−2−an−1+an
. This value cannot be exceeded because an−1
 will always be negative.
 */

#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

void solver(){
    
    int n;
    cin>>n;

    vector<ll> arr (n);

    for(int i = 0 ;i  < n ; i ++) cin>>arr[i];


    ll sum = 0;
    for(int i =0 ; i <n ; i ++){

        sum+= arr[i];

        if(i==n-2) sum-= 2* arr[i]; 

    }

    cout<<sum<<endl;

}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}