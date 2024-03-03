//DFS
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int>v[11000];
int vis[1000];
void DFS(int node){
    vis[node]=1;
    cout << node << " ";
    //for(int i=0; i<v[node].size();i++)
       for(int child: v[node]) {
       // int child=v[node][i];
        if(vis[child]==0){
                DFS(child);
        }
    }
}
int main(){
    int n,e;
    cout << " Enter node: ";
    cin >> n;
    cout << "Enter edge: ";
    cin >> e;
    int x,y;
    while(e--){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1);
return 0;
}
