#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>


/* the MEX
 to be at least k
, then each non-negative integer from 0
 to k−1
 must appear at least once in the array.

First, notice that since there are only n
 elements in the array, there are at most n
 different values, so the MEX
 can only be at most n
. And since we can only increase an element's value, that means every element with values bigger than n
 can be ignored.

We construct a frequency array freq
 such that freq[k]
 is the number of elements in a
 with value k
.

Notice that the values just need to appear at least once to contribute to the MEX
, so two or more elements with the same value should be split into different values to yield a potentially better result. To find the maximum possible MEX
, we iterate each index k
 in the array freq
 from 0
 to n
. In each iteration of k
, if we find freq[k]>0
, that means it's possible to have the MEX
 be bigger than k
, so we can iterate k
 to the next value. Before we iterate to the next value, if we find freq[k]>1
, that indicates duplicates, so we should do an operation to all except one of those values to change them into k+x
, which increases freq[k+x]
 by freq[k]−1
 and changes freq[k]
 into 1
. In each iteration of k
, if we find freq[k]=0
, that means, k
 is the maximum MEX
 we can get, and we should end the process.

Time complexity for each test case: O(n)*/
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

    // sort(arr.begin(), arr.end());

    for(auto it:arr)    freq[it]++;

    for(int i = 0 ; i < n; i ++){

    if(freq.find(i) == freq.end()) {
        cout<<i<<endl;
        return;
    }

    if(freq[i] > 1) {
        freq[i+x] += freq[i] - 1;
        freq[i] = 1;
    }

    else if(freq[i] == 1 ) continue;

   }
    cout<<n<<endl;

}

int main(){
     
    int testno;
    cin>>testno;

    while(testno--)
        solver();
    
    return 0;
}