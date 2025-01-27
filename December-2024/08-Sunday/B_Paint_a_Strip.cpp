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

    ll ans;

    if(n == 1) ans = 1;

    else if(n <=4 ) ans = 2;

    else{

        ll currans = 2;

        ll currlimit = 4;



        while(n > currlimit){

            currlimit = (currlimit+1) *2;
            currans++;

            ans = currans;

            // cout<<currlimit<<" ";

            

        }


        

    }

    cout<<ans<<endl;

}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}