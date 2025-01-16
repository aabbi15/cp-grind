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
    int numodd = 0, numeven = 0;


    for(int i =  0 ;i < n ; i++){

        ll num;
        cin>>num;

        if(num&1)numodd++;
        else numeven++;
    }

    if(n==1){

        if(numodd) {
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }

    if(numodd == 0) {
        cout<<"NO\n";
        return;
    }

    if( (n&1) ){

        if(numodd>=1){
            cout<<"YES\n";
            return;

        }
        else{
            cout<<"NO\n";
            return;
        }
    }

    else{

        if(numodd>=1 && numeven>=1) {
             cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}