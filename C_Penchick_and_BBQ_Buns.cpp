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

    if(n&1 && n <=25) {

        cout<<-1<<endl;
        return;
    }


    else if(n&1 && n>25){

        cout<<"1 3 3 4 4 5 5 6 6 1 2 7 7 8 8 9 9 10 10 11 11 12 12 13 13 1 2 ";

        ll curr = 14;

        for(int i = 28 ; i <= n ; i +=2){

        cout<<curr<<' '<<curr<<' ';

        curr++;

    }
    }

    else{
    ll curr = 1;

    for(int i = 0 ; i < n ; i +=2){

        cout<<curr<<' '<<curr<<' ';

        curr++;

    }

    cout<<endl;
    }
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}