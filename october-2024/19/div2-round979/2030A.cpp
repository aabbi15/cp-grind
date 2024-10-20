//QUESTION https://codeforces.com/contest/2030/problem/A

//SOLUTION

/*

in the optimal array the maxi mum element is placed first and then the mininmum element. THis will automatically
maximize the sum of differences since the max-diff =  (maxi-mini)

hence ans will be (n-1 )* (maxi-mini)*/


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

    ll maxi = -1;
    ll mini = 1e8;

    for(int i = 0 ;  i < n ; i ++){

        ll temp;
        cin>>temp;

        // cout<<temp;

        maxi = max(maxi,temp);
        mini = min(mini,temp);

        // cout<<maxi<<" "<<mini <<"hi \n";
    }

    ll ans  = (maxi - mini) * (n-1);

    cout<<ans<<"\n";
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}