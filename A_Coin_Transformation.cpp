#include <bits/stdc++.h>

using namespace std;

void func(){

    int t;
    cin>>t;

    while(t--){

        int x;
        cin>>x;

        int cns = 1;

        while(x>3){

            // if (x % 4 == 0) {
                x /= 4;  
                cns *= 2; 
            // }

            
            // else {
            //     x -= 4; 
            //     cns++; 
            // }



        }

        cout<<cns<<endl;
    }


}

int main(){

    func();
    return 0;
}