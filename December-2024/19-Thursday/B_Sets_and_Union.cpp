#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>
#include<unordered_set>
#include<set>

typedef long long ll;

using namespace std;

void solver(){
    
    ll n;
    cin>>n;

    set<int> total;

    

    vector<set<int>> arr(n); 

    // if(n==1) {
    //     cout<<"0";
    //     return;
    // }

    for(int i = 0 ; i <n ; i ++){

        int size;
        cin>>size;

        for(int j = 0; j < size ; j ++){

            int num;
            cin>>num;

            // cout<<num<<" ";
            arr[i].insert(num);
            total.insert(num);
        }

        // cout<<"\n";
    }

    // for(auto st:arr){
            
                                    

    //             for(auto it:st){

    //                 cout<<it<<" ";
    //             }

    //             cout<<"\n";
    // }


    int ans = 0;

    for(int i = 1; i <=51 ;i++){

        set<int> ansset;

        // cout<<i<<endl;

        for(auto st:arr){
            if(st.find(i) != st.end()) {
                                    // cout<<"no lo se";

                // for(auto it:st){

                //     cout<<it<<"\n";
                // }
                continue;
            }

            else{

                for(auto it:st){
                    ansset.insert(it);
                }
            }
        }

        // for(auto it:ansset) cout<<it<<" ";

        // cout<<endl;

        int sz = ansset.size();
        if(total != ansset) ans  = max(ans,sz);
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