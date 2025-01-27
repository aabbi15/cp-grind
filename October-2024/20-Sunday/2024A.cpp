// Question https://codeforces.com/contest/2024/problem/A

//Solution 

/*

Pretty simple if bank (a) which is money we have and reqd(b) money required to open bank account then
    we can use x as the amount of moneny we need to put in to unprofitable acct
    we get eqn
        a-x = b-2x
        x = b-a

    get x using this then a-z is the amount put into profitable acct
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
    int a,b;

    cin>>a>>b;

    if(a>=b) {
        cout<<a<<"\n";

        return;
    }

    ll x = b-a;

    if(x >=a ) {
        cout<<0<<"\n";
    }

    else cout<<a-x<<endl;
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}