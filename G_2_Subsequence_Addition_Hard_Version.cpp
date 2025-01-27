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
    
    vector<int> arr(n);

    
    // cout<<n<<endl;

    for(int i = 0 ; i < n ; i ++){

        int num;
        cin>>num;
        arr[i] = num;
        
    } 

    // for(int i = 0 ; i < n ; i ++) cout<<arr[i];

    sort(arr.begin(), arr.end());


    if(arr[0] != 1) {

        // cout<<arr[0]<<"lisdnkj"<<endl;
        cout<<"NO\n";
        return;
    }

    ll sum = 1;

    for(int i = 1 ; i< n ; i ++){

        if(arr[i] <= sum) sum+= arr[i];

        else{

            cout<<"NO\n";
            return;
        }


    }

    cout<<"YES\n";
            return;
}

int main(){
    int testno;
    cin>>testno;

    // cout<<"oyih"<<testno<<endl;

    while(testno--)
        solver();

    return 0;
}
