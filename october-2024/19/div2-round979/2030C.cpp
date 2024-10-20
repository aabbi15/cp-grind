//QUESTION https://codeforces.com/contest/2030/problem/C

//SOLUTION

/*

ALL ORs are evaluated AFTER all ANDs have been 

First, if the first or last boolean is true, then Alice instantly wins
by placing OR between the first and second, or second to last and last booleans.

Otherwise, if there are two true's consecutively, Alice can also win.
Alice may place OR before the first 1 / after the second 1 on her first move. 
 
So on her second move Alice can just place an or on the other side of the two true's to win.

0000 or 1 and 1 or 000 --> if bob places in between
0000 or 1 or 1 and 000 --> if bob places on side



We claim these are the only two cases where Alice wins. This is because otherwise, 
there does not contain two true's consecutively. 
Now, whenever Alice places an or adjacent to a true, 
Bob will respond by placing and after the true, which will invalidate this clause to be false.
*/


#include <iostream>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <vector>

typedef long long ll;

using namespace std;

void solver()
{
    int n;
    cin >> n;

    string s;

    cin >> s;

    int k = -1;

    // Find the first divergence between adjacent booleans
   int flag=0;

    for(int i=1;i<n;i++){

      if(s[i]=='1' && s[i-1]=='1'){
        cout<<"YES\n";
        return;
      }
    }


    if(s[0]=='1' || s[n-1] =='1'){
      cout<<"YES\n";
        return;
    }
    
    
    
    cout<<"NO\n";
    

}

int main()
{
    int testno;
    cin >> testno;

    while (testno--)
        solver();

    return 0;
}