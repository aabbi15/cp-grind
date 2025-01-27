//QUESTION https://codeforces.com/problemset/problem/2009/C

//SOLUTION

/*
    Basically we have to move ceil(x/k) moves minimum in right. and ciel(x/k) movies minimum in up.

    if we right moves are more than left then since we are going right first w can do (2*right_moves - 1)

    if up is greater than we have to do right also same number of times only so (2*up_moves)
*/

#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

void solver(){
    
    ll x,y,k;

    cin>>x>>y>>k;

    ll steps_in_x = x/k;

    if( (x%k)!=0) steps_in_x++;

    ll steps_in_y = y/k ;

    if( (y%k )!=0) steps_in_y++;

    ll maxi =  max(steps_in_x,steps_in_y);

    if(steps_in_x > steps_in_y == 1) cout << (2 * maxi )- 1 << "\n";

    else {

       cout<<2*maxi<<"\n";
    }


}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}