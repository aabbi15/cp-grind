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

    vector<int> a(n),b(n);

    for(int i = 0 ; i < n; i ++){

        cin>>a[i];
    }

    for(int i = 0 ; i < n; i ++){

        cin>>b[i];
    }

    int alast = a[n-1];
    int blast = b[n-1];

    if(alast > blast){
        swap(blast,alast);
    }
    

    int smaller = -1;
    int bigger = -1;

    for(int i = 0 ; i < n-1 ; i ++){

        smaller = min(b[i],a[i]);
        bigger = max(a[i],b[i]);

        if(a[i] > alast && a[i] >blast){
            
            cout<<"No\n";
            return;
        }

        if(smaller > alast || bigger > blast){

            cout<<"No\n";
            return;
        }



    }

    cout<<"Yes\n";



}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}