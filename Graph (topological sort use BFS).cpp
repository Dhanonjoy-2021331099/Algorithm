//Topological Sorting using BFS

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> v[10000];
int mp[1000];
vector<int>ans;

void bfs(int n){
    queue<int>q;
    for(int i=1; i<=n;i++){
        if(mp[i]==0) q.push(i);
    }
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        ans.push_back(cur);
        for(int child : v[cur]){
            mp[child]--;
            if(mp[child]==0)
            {
                q.push(child);
            }
        }
    }

/*
    cout << "The Topological sort is : ";
    for(int i=0; i<ans.size();i++){
        cout <<ans[i] << " ";
*/
    }
}

int main(){
    int n,m,x,y,i;
    cin >> n >>m;
    while(m--){
        cin >> x >>y;
        v[x].push_back(y);
        mp[y]++;
    }
    bfs(n);

return 0;
}
