#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

ll ans = 0;

//-1 is not start, 1 is Q, 2 is QA, 3 is QAQ

void helper(string s,int n, int i,  int seq){

    // cout<<i<<' '<<seq<<endl;

    if(i == n) return;


    if(seq == -1){

        if(s[i] == 'Q'){
            //take
            // cout<<i<<seq<<endl;
            helper(s,n,i+1,1);
        }
    }

    else if(seq == 1){

        if(s[i] == 'A'){
            //take
            // cout<<i<<seq<<endl;
            helper(s,n,i+1,2);
            // helper(s,n,i+1,1);
        }

        
    }

    else if(seq == 2){

        if(s[i] == 'Q'){
            //take
            ans++;
            // cout<<i<<seq<<endl;
            // helper(s,n,i+1,-1);


           
        }

        

        
    }
    //take
     helper(s,n,i+1,seq);
}

void solver(){
    string s;
    cin>>s;

   
    int n = s.size();
     helper(s,n,0,-1);

     cout<<ans<<endl;
}

int main(){
    int testno=1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}