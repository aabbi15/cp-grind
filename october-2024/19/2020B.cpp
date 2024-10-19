// Question:

/*
Imagine you have n
 light bulbs numbered 1,2,…,n
. Initially, all bulbs are on. To flip the state of a bulb means to turn it off if it used to be on, and to turn it on otherwise.

Next, you do the following:

for each i=1,2,…,n
, flip the state of all bulbs j
 such that j
 is divisible by i†
.
After performing all operations, there will be several bulbs that are still on. Your goal is to make this number exactly k
.

Find the smallest suitable n
 such that after performing the operations there will be exactly k
 bulbs on. We can show that an answer always exists.

†
 An integer x
 is divisible by y
 if there exists an integer z
 such that x=y⋅z
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The only line of each test case contains a single integer k
 (1≤k≤1018
).

Output
For each test case, output n
 — the minimum number of bulbs.

*/


//Solution:

/*


The bulb’s state depends on the number of divisors only.
If the number has an even number of divisors (not a perfect square), the bulb stays on; if odd (a perfect square), the bulb is off.

Number of perfect squares <=n is square_root(n). [including 1 and n]
therefore we have to binary search for a n such that n - root(n) == k.


Why perfect square only have ODD number of factors?
Factors come in pairs, except for perfect squares, where one factor is repeated (the square root).
For example, the factors of 12 are 1X12, 2*6, 3*4 (an even number of factors),
while 36 has factors 1*36, 2*18 , 3*12, 4*9, 6. (an odd number of factors because 6 repeats).

*/


#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<math.h>

typedef long long ll;

using namespace std;

bool helper(ll mid, ll k) {
    ll cnt = floor(sqrt(mid));  // Count of perfect squares up to 'mid'

    // cout<<cnt<<mid<<" cntmid \n";
    return (mid - cnt >= k);  // Check if non-perfect squares equals 'k'
}


void solver(){
    

    ll k ;
    cin>>k;

    // cout<<k<<endl;

    ll right = 2*k;
    ll left  = 1;
    // cout<<left<<right;
    ll ans = k*2;

 

    while(left <= right){

            // cout<<left<<right<<"hi \n";
        ll mid = (left+right)/2;

        if(helper(mid,k)){

            ans = mid;
            right=mid-1;
        }

        else{

            left = mid+1;
        }
    }

    cout<<ans<<"\n";
}

int main(){
    int testno;
    cin>>testno;

    // cout<<testno;
    while(testno--)
        solver();

    return 0;
}