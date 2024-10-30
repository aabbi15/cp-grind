//QUESTION  https://codeforces.com/blog/entry/124220

//SOLUTION

/*
    we only care about the last inserted element of the two subarrays s and t. let them be x and y 

    for the first element in both s and t it can NEVER be a violation so let x and y be INF.
    we assume x<=y since it does not make a difference

    now if num(curr element of array) is <= x --> insert it in s subarray i.e, make it x
    else if num > x && num <= y --> insert it in t subarray i.e. make it y 

    in these 2 cases there is no violation since we are chosing the safer option

    else (if num >y) there has to be violation so insert it in s 
    i.e, make x = num and violation++;

    now make sure x<=y before the next iteration
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
    
    ll n;
    cin>>n;

    // if(n == 1){

    //     cout<<"0"<<"\n";    
    //     return;
    //     }

    vector<ll> arr(n);
    for(int i = 0 ; i < n ; i ++) cin>>arr[i];

    ll ans = 0;
    
    ll x = 1e16, y = 1e16;

    

    for(int i =0 ; i < n ; i ++){

        // if(y<x) swap(x,y);

        ll num = arr[i];
        // cout<<num;

        if(num <= x){

            x = num;
            

        }

        else if(num>x && num <= y){

            y = num;
            
        }

        else{

            x = num;
            ans++;

            // cout<<num<<"hi\n";
        }

        ll tempx = min(x,y);
        ll tempy = max(x,y);

        x = tempx;
        y = tempy;  
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