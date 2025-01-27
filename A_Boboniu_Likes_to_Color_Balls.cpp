#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    
    ll r,b,g,w;

    cin>>r>>b>>g>>w;


    if( (r&1) && (b&1) && (g&1) ) {

        cout<<"Yes"<<endl;
        return;
    }

    if( !(r&1) && !(b&1) && !(g&1) ) {

        cout<<"Yes"<<endl;
        return;
    }

    int sum = 0;

    sum = (r&1) + (b&1) + (g&1);

    if( sum ==1 ) {

        if(w&1)
            cout<<"No"<<endl;

        else 
            cout<<"Yes"<<"\n";


        return;
    }

    if( sum == 2 ) {

        if( (w&1 ) && (r>=1 && b>=1 && g>=1 ))
            cout<<"Yes"<<endl;

        else 
            cout<<"No"<<"\n";

            
        return;
    }


}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}