#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    
    string s;
    cin>>s;

    string pi = "3141592653589793238462643383279";


    int cnt = 0;

    int n = s.size();

    for(int i = 0 ; i< n ; i ++){

        if(pi[i] == s[i])cnt++;

        else break;
    }

    cout<<cnt<<endl;


}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}