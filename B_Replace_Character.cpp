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

    vector<int> freq(26,0);

    string s;
    cin>>s;


    if(n==1) {

        cout<<s<<endl;
        return;
    }

    int maxfreq = 0;
    char maxchar = s[0];


    int minfreq = 1e8;
    char minchar = s[0];



    for(int i = 0 ;i < n ; i ++){

        int numchar = s[i]-'a';

        freq[numchar]++;

        if(freq[numchar] > maxfreq){

            maxfreq = freq[numchar];
            maxchar = s[i];
        }
    }

    for(int i = 0 ; i < 26 ;i ++){

        if(minfreq > freq[i] && freq[i] > 0 && ('a'+i) != maxchar){

            minchar = ('a'+i);
            minfreq = freq[i];
        } 

    }

    // cout<<minchar<<endl;


    for(int i = 0 ; i < n ; i++){

        if(minchar == s[i]){
            s[i] = maxchar;
            break;
        }
    }


    cout<<s<<endl;



}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}