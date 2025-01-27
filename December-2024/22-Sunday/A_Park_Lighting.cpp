#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>
#include<string>

typedef long long ll;

using namespace std;

void solver(){
    
    int r,c;

    cin>>r>>c;

    if(r<c){
        
        swap(r,c);
    }

    ll ans=0;

    if(r>=2)
    ans = (r/2) * (c);


    if(c==1) c++;

    ans+= (r%2) * (c+1)/2;

    cout<<ans<<endl;


}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}