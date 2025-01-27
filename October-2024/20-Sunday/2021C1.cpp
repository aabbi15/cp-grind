// QUESTION https://codeforces.com/problemset/problem/2021/C1

//SOLUTION

/*
 We can place the people who have already presented wherever we want, so they willnot be an issue.
 Issue arises when there are people who have not been in the front of the queue yet and their chance
 to present is there.

 so we maintain a visited map <person,bool> and a next pointer indicating to the person
 who is next in line to be visited. Now for each element in slides we check

 if the preferred person has already visited --> all good
 
 if not visited but, is the next pointing to preffered person --> mark him visited and all good
 if not visited and not next in line -->then he cannot present hence false.



*/
#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>

typedef long long ll;

using namespace std;

void solver(){
    int n,m,q;

    cin>>n>>m>>q;


    vector<int> people(n);
    vector<int> slides(m);


    for(int i = 0 ; i < n ; i ++) cin>>people[i];
    for(int i = 0 ; i < m ; i ++) cin>>slides[i];

    int next = 0;

    unordered_map<int,int> vis;

    for(auto it:slides){

        if(vis[it] > 0){

            // cout<<"tidak\n";
            // return;
            continue;
        }
        else{

            if(people[next] == it) {

                vis[it] = 1;
                next+=1; 
            }

            else{

                // cout<<it<<" "<<next<<"hi \n";
                // for(auto it2: vis) cout<<it2.first<<"bye\n";
                cout<<"TIDAK\n";
                return;
            }

        }
        
    }


    cout<<"YA\n";


}

int main(){
    int testno;
    cin>>testno;

    while(testno--)
        solver();

    return 0;
}