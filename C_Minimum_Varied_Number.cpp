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

    int curr = 9;

    string s  ="";

    while(n>0){

        

        if(n-curr >= 0){
           
            s+= to_string(curr);

        }
        
        else{
            
            s+= to_string(n);
        }
         n-=curr;

        curr--;

        



    }

    reverse(s.begin(), s.end());

    cout<<s<<endl;
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}