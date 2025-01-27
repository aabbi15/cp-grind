#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

bool comp(int a,int b){

    return a>b;
}

void solver(){
    
    int n, q;


    cin>>n>>q;

    vector<int> arr(n);

    for(int i = 0;i <n ; i ++){

        cin>>arr[i];

        // cout<<arr[i];
    }
// cout<<endl<<endl;
    sort(arr.begin(),arr.end(),comp);

    for(int i = 0 ; i < q; i ++){

        int x,y;

        cin>>x>>y;

        int index = x-1;
        ll ans=0;

        while(y){

            ans += arr[index];
            index--;
            y--;
        }

        cout<<ans<<endl;

    }
}

int main(){
    int testno=1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}