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

    ll oddsum= 0;
    ll evensum=0;

    for(int i = 0 ; i <n ;i ++){

        int num;
        cin>>num;

        if(num&1) oddsum+=num;
        else evensum+=num;
    }

    if(evensum >oddsum) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}