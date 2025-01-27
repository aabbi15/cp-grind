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

    int n = s.size();

    // cout<<s<<n<<"mdscn";

    vector<int> arr(n+1,0);

    for(int i = 0 ; i < n-1 ; i ++){

        if(s[i] == s[i+1]) arr[i]++;
    }

    for(int i = 1 ; i < n ; i ++){

        arr[i] += arr[i-1] ;

        // cout<<arr[i]<<" ";
    }

    int q;
    cin>>q;

    // cout<<s<<q<<"AScliasnc";

    for(int i = 0 ; i < q; i ++){

        int l, r;
        cin>>l>>r;

        l--;
        r--;

        if(l-1>=0)
        cout<<arr[r-1] - arr[l-1] << endl;

        else cout<<arr[r-1] << endl;
    }


}

int main(){
    int testno = 1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}