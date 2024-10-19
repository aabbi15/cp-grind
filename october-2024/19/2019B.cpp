//Question

/*
You are given n
 points on the x
 axis, at increasing positive integer coordinates x1<x2<…<xn
.

For each pair (i,j)
 with 1≤i<j≤n
, you draw the segment [xi,xj]
. The segments are closed, i.e., a segment [a,b]
 contains the points a,a+1,…,b
.

You are given q
 queries. In the i
-th query, you are given a positive integer ki
, and you have to determine how many points with integer coordinates are contained in exactly ki
 segments.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains two integers n
, q
 (2≤n≤105
, 1≤q≤105
) — the number of points and the number of queries.

The second line of each test case contains n
 integers x1,x2,…,xn
 (1≤x1<x2<…<xn≤109
) — the coordinates of the n
 points.

The third line of each test case contains q
 integers k1,k2,…,kq
 (1≤ki≤1018
) — the parameters of the q
 queries.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
, and the sum of q
 over all test cases does not exceed 105
.

Output
For each test case, output a single line with q
 integers: the i
-th integer is the answer to the i
-th query.
*/

//Solution

/*
    Basically any number will have number of lines crossing through it equal to 
    => L*R

    l is the number of points to the left of it, R is the number of points to the right of it.

    for end points [0] and [n-1] the number of points is (n-1)
    n i ssize of array i.e, num of points

    create a map<#lines_crossing, frequency> 

    if a    b are two points then for all nums between a and b (a-b-1), the #lines_crossing will be equal to 
    (it) * (n-it) where it is index of b
*/



#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

void solver(){
    ll n1;
    cin>>n1;

    ll n2;
    cin>>n2;

    vector<ll> arr(n1);
    vector<ll> query(n2);

    for(ll i = 0 ; i <n1; i ++){

        cin>> arr[i];
    }

     for(ll i = 0 ; i <n2; i ++){

        cin>> query[i];
    }

    unordered_map<double,ll> m;

    m[n1-1] = 1;

    for(ll i = 1  ; i < n1 ; i ++){


        double atpoint = i * (n1-i-1);

        m[atpoint+n1-1]++;

        ll nums =  arr[i] - arr[i-1]-1;
        
        double lines = i * (n1-i);

        if(nums>0)
            m[lines] += nums;

        // cout<<i<<" "<<arr[i]<<  " "<< atpoint+n1-1<<" "<< nums <<endl;
    }


    for(auto it: query){
        cout<< m[it] << " ";
    }

    cout<<"\n";
}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}