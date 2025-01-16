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
    string s;
    cin>>s;

    n = s.size();

    unordered_map<int,int> m;

    for(int i = 0 ; i < n ; i ++){

        m[s[i]]++;
    }

    for(auto it:m){

        if(it.second==3){

            cout<<6<<endl;
            return;
        }

        if(it.second == 4){

            cout<<-1<<endl;
            return;
        }


        if(it.second == 2){
            cout<<4<<endl;
            return;
        }
    }

    cout<<4<<endl;
            return;
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}