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
    
    vector<ll> arr(n+1,0);
    vector<ll> psum(n+1,0);

    for(int i = 1 ; i <= n ; i ++){

        cin>>arr[i];


    }

    if(arr[1] != n){
            cout<<"NO\n";
            return;
        } 

    for(auto it: arr){

        if(it > n ){
            cout<<"NO\n";
            return;
        } 

        // cout<<it<<endl;

        psum[it]++;
    }

    for(int i = n ; i >=1 ; i --){

        if(i==n) psum[i] = arr[i];

        else{

            psum[i] += psum[i+1];
        }


    }

    for(int i = n ; i >=1 ; i --){


        // cout<<arr[i]<<" "<<psum[i]<<endl;
        if(arr[i]==psum[i]) continue;

        else{

            cout<<"NO\n";
            return;
        }


    }

    cout<<"YES\n";
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}