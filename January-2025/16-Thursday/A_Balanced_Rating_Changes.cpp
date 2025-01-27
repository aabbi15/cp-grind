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

    bool plus = false;

    for(int i = 0; i < n ; i ++){

        float num;
        cin>>num;

        

        float printer = 0;

        if(int(num)&1){

            if(plus){

                printer = num/2;
                printer = printer - 0.5;

                cout<<int(printer)<<endl;
            }
            else{

                printer = num/2;
                printer = printer + 0.5;

                cout<<int(printer)<<endl;
            }

            plus = !plus;
        }

        else{

            printer = num/2;
            cout<<int(printer)<<endl;
        }
    }
}

int main(){
    int testno =1;
    // cin>>testno;

    while(testno--)
        solver();

    return 0;
}