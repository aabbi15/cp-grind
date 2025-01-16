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

    vector<int> arr(n+2,-100);

    for(int i = 1 ; i <=n ; i ++){

        cin>>arr[i];

        // cout<<i<<arr[i];
    }

    for(int i= 1 ; i <= n  ;i ++){

        if(arr[i] > i ){

            if(arr[i+1] == arr[i]-1 ){

                swap(arr[i],arr[i+1]);
            }

            else{

                cout<<"NO"<<endl;
                return;
            }
        }

        if(arr[i] == i) continue;

        else{
            cout<<"NO"<<endl;;
            return;
        }

        cout<<arr[i];
    }

    cout<<"YES"<<endl;

}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}