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

    string s;


    cin>>s;

    

    vector<int> arr(n,0); //left flip 1, rightflip 2

    int l = 0 ,r = n-1;

    while(l<r){

        if(s[l] != s[r]) 

         {

            arr[l] = 1;
            arr[r] = 2;
        }

        l++;
        r--;
    }

    l = 0;

    bool train = false;

    bool leftse = true;

    while(l<n){

        // cout<<arr[l];

        if(arr[l] == 1 ){
            if(train== false) train = true;

            else if(l>=1 && arr[l-1] == 0) {

                
                leftse = false;
                break;
            }
        } 

        l++;
    }

    l = 0;
    train = false;

    bool rightse = true;
    while(l<n){

        if(arr[l] == 2 ){
            if(train== false) train = true;

            else if(l>=1 && arr[l-1] == 0) {

                
                rightse = false;
                break;
            }
        } 

        l++;
    }

    if(leftse || rightse) cout<<"Yes\n";

    else cout<<"No\n";

}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}