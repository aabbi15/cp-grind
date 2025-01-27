#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){

    return a.first<b.first;
}

void solver(){
    
    ll n, k;
    cin>>n>>k;


    vector<pair<int,int>> arr(n+1);

    for(int i = 1 ; i <= n ; i ++){

        int num;
        cin>>num;

        arr[i] = {num,i};
    }

    sort(arr.begin(),arr.end(),comp);

    int i = 1;

    vector<int> ans;

    while(k && i<=n){

        if(k-arr[i].first >= 0){
            ans.push_back(arr[i].second);
        }
        else{
            break;
        }

        k-=arr[i].first;
        i++;
    }

    cout<<ans.size()<<endl;

    for(auto it: ans) cout<<it<<" ";

    // cout<<endl;
}

int main(){
    int testno=1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}