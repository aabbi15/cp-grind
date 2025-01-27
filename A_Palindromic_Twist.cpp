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

    cin>>n;
    cin>>s;

    int l = 0;
    int r = n-1;

    // cout<<char('a'+1)<<endl;

    // cout<<s<<endl;

    while(l<r){

        if(s[l] == s[r] || s[l] + 1 == s[r]-1 || s[l] -1 == s[r]+1){

            l++;
        r--;
        }

        else{

            cout<<"NO\n";
            return;
        }

        

    }

    cout<<"YES\n";

}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}
