//Single source shortest path using BFS

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>v[10000];
int dis[10000];
int vis[10000];
void BFS(int node){
    queue<int> q;
    q.push(node);
    vis[node] =1;
    dis[node]=0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int child : v[cur]){
            if(vis[child]==0){
                dis[child]=dis[cur]+1;
                vis[child]=1;
                q.push(child);
            }
        }
    }
}
int main(){
    int n,m,x,y;
    cin >> n >>m;
    while(m--){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    BFS(5);
    for(int i=1; i<=n;i++){
        cout << "Distance of node :"<< i << "=" <<dis[i] <<endl;
    }

return 0;
}
