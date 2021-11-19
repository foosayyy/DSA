#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[], int s, bool visited[]);

int BFSdis(vector<int> adj[], int v){
   int count = 0;
   bool visited[v+1];
   for(int i=0; i<v; i++)
      visited[i] = false;

   for(int i=0; i<v; i++){
      if(visited[i] == false){
         bfs(adj, i, visited);
         count++;
      }
   }
   return count;
}

void bfs(vector <int> adj[], int s, bool visited[]){
   queue<int> q;
   visited[s] = true;
   q.push(s);

   while(q.empty()==false){
      int u = q.front();
      q.pop();
      

      for(int v: adj[u]){
         if(visited[v] == false){
            visited[v] = true;
            q.push(v);
         }
      }
   }
}

void addEdge(vector<int> adj[], int u, int v){
   adj[u].push_back(v);
   adj[v].push_back(u);
}

int main(){
   int v=7;
   int count = 0;
   vector <int> adj [v];
   addEdge(adj,0 ,1);
   addEdge(adj,0 ,2);
   addEdge(adj,3 ,1);
   addEdge(adj,3 ,2);
   addEdge(adj,4 ,5);
   addEdge(adj,4 ,6);
   
   cout<<"No. of disconnected graphs:"<<BFSdis(adj,v);

   return 0;
}
