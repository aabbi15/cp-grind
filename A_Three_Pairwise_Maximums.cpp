#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    
    ll x,y,z;

    cin>> x>>y>>z;


    ll a=-1,b=-1,c=-1;

    if(x==y && z<=x) {

        a=x;
        b=z;
        c=z;
    }

    else if(x==z && y<=x) {

        b=x;
        a=y;
        c=y;
    }

    else if(z==y && x<=z) {

        c=z;
        b=x;
        a=x;
    }

    else{

        cout<<"NO\n";
        return;
    }

    cout<<"YES\n";
    cout<<a<<' '<<b<<' '<<c<<endl;
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}