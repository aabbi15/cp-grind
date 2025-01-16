#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;





void solver(){
    int m , n;

    cin>>m>>n;

    int x=m-1,y=n-1;
    ll ans = 0;

    vector<vector<char>> arr(m,vector<char>(n));

    for(int i = 0 ; i < m ; i ++){

        for(int j= 0;j < n; j ++){

            cin>>arr[i][j];

            if(arr[i][j] == 'C'){

                x=i;
                y=j;
            }
        }
    }

    for(int i = 0 ; i < m-1 ; i ++){

        if(arr[i][n-1] == 'R'){
            // cout<<i<<"right"<<endl;
            ans++; 
        } 
    }

    for(int i = 0 ; i < n-1 ; i ++){

        if(arr[m-1][i] == 'D')
        {
            // cout<<i<<"down"<<endl;
            ans++; 
        }
    }

    // f(x,y,m,n,-1,arr);

    cout<<ans<<endl;




}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}