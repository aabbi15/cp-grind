#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>
#include<unordered_set>

typedef long long ll;

using namespace std;

void solver(){
    
    // int n;

    string s;

    cin>>s;

    int n = s.length();

    int mini = abs (int(s[n-1]) - int(s[0]));

    bool chota = true;

    if(s[n-1] < s[0]) chota = false;


    char prev = s[0];
    char last = s[n-1];

    vector<int> st;

    // st.push_back(1);


    

    if(chota == true){

    
    for(char ch = prev ;ch <= last ; ch++){
    
        for(int i  = 0 ; i < n ; i ++){

            if(ch == s[i]) st.push_back(i+1);
        }
    
    }

    }

    else{

        for(char ch = prev ;ch >= last ; ch--){
    
        for(int i  = 0 ; i < n ; i ++){

            if(ch == s[i]) st.push_back(i+1);
        }
    
    }
    }







    

    int sz = st.size();

    cout<<mini<<" "<<sz<<endl;

    for(auto it: st) cout<<it<<" ";

    cout<<endl;
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}