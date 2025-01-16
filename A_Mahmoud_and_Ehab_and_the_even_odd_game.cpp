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

    if(n&1) cout<<"Ehab";
    else cout<<"Mahmoud";
    
    cout<<endl;
}

int main(){
    int testno=1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}