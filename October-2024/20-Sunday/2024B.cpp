
// Question https://codeforces.com/contest/2024/problem/B

//Solution 

/*

if the qty arr is 1 1 2 1 1 
and we need 5 drinks
    the best case for us will be to press each button once, using this info we create our algo

    sort the array
    create a pointer IT pointing to the first(i.e, minimum) NONZERO button number
    
    we know IT points to minimum therefore (n-IT) buttons will have >=arr[IT] drinks in them
    hence we add (n-IT)*arr[IT] to our target
    and subtract arr[IT] from each element in arr since we have used that # drinks from machine

    

*/


#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    ll n,  k;
    cin>>n>>k;

    vector<ll> arr(n);

    for(ll i = 0 ; i <n ; i ++) cin>>arr[i];

    sort(arr.begin(), arr.end());

    ll count = 0;
    ll ans = 0;

    ll it = 0;

    ll each;

    ll taken_each = 0;

    while (count<k){
        
        each = arr[it] - taken_each;

        if(each<0) each  = 0;

        ll allowed = each* (n-it);
        

        

        if(allowed+count < k){
            count+=allowed;

            ans+=allowed+1;
            it++;
            
            taken_each+= each;
        }

        else{
            ans+= k-count;
            
            count += k-count;
            break;
        }
        

        
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