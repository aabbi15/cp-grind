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

    vector<int> a(n);

    for(int i= 0 ;i < n ; i ++){

        cin>>a[i];
    }

    int pos = 0, neg= 0;

    for(auto it: a){

        if(it<0) neg++;
        else pos++;

    }


    //maximum

    int temppos = pos, tempneg  = neg;


    int cnt = 1;

   while(temppos||tempneg){

    

        if(temppos){

            cout<<cnt<<' ';
            temppos--;
            cnt++;

            if(temppos == 0) cnt--;
        }

        else{

            cnt--;
            cout<<cnt<<' ';
            tempneg--;
        }
    }

    cout<<endl;

    temppos = pos;
    tempneg  = neg;
    cnt = 1;

    

     while(temppos||tempneg){

        if(tempneg){

            cout<<"1 0 ";

            tempneg--;
            temppos--;
        }

        else{

            cout<<cnt<<' ';
            temppos--;
            cnt++;
        }
    }

    cout<<endl;
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}