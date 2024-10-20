//QUESTION https://codeforces.com/contest/2030/problem/B

//SOLUTION

/*

BULLSHIT ANSWER just keep 1 one and the rest zeros to  make f and g as close as possible 

because then g will be f + 2
n i slen of string
*/


#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

void solver(){
    int n;
    cin>>n;


    string s = "1";

    if(n == 0){
        cout<<""<<"\n";
        return;
    }
    

    for(int i = 1 ; i < n ; i ++){

        s+='0';

    }

    cout<<s<<"\n";




    
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}