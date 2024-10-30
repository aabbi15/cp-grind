// QUESTION https://codeforces.com/contest/2030/problem/D

#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    
    ll n,q;

    cin>>n>>q;

    cout<<n<<q<<"\n";

    vector<ll> arr(n);
    // vector<char> direction(n);

    string direction;
    
    unordered_map<ll,bool> faults;
    ll truefaults = 0;


    for(ll i =0 ; i < n ; i ++) cin>>arr[i];

    // for(ll i = 0 ;i < n ; i ++) cin>>direction[i];

    cin>>direction;


    
    cout<<"hello\n";


    vector<ll> pmax(n,-1);
    vector<ll> smin(n,1e16);

    pmax[0] = arr[0];
    smin[n-1] = arr[n-1];

    for(ll i= 1 ; i < n ; i ++){
        
    pmax[i] = max(pmax[i-1],arr[i]);

        
    }
    
    for(ll i= n-2 ; i >=0 ; i ++){
        
    smin[i] = min(smin[i+1],arr[i]);

        
    }


    for(ll i = 0 ; i < n ; i ++){

        if(direction[i] == 'L' && direction[i+1] == 'R'){

            if(pmax[i] > smin[i+1]) faults[i] = true;
        }
    }

    for(int i  = 0 ; i <q ; i ++){

        ll query;
        cin>>query;

        query--;

        if(direction[query] == 'L' ) direction[query] = 'R';
        else direction[query] = 'L';


        if(direction[query-1] == 'L' && direction[query] == 'R'){

            if(pmax[query-1] > smin[query]) {

                faults[query-1] = true;
                // faults.erase(query-1);
            }
        }

        else{

            if(faults.find(query-1) != faults.end()) faults.erase(query-1);

        }

        
        if(direction[query] == 'L' && direction[query+1] == 'R'){

            if(pmax[query] > smin[query+1]) {

                faults[query] = true;
                // faults.erase(query-1);
            }
        }

        else{

            if(faults.find(query) != faults.end()) faults.erase(query);

        }

        if(faults.size() > 0) cout<<"NO\n";
        else cout<<"YES\n";


    }

    
}

int main(){
    int testno;
    cin>>testno;

    while(testno--){
        // cout<<testno;
        solver();
    }

        

    return 0;
}