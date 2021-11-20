#include <bits/stdc++.h>
using namespace std;

void DFScycleDetection(vector<int> adj[], int v){
   vector<int> indegree(v,0);
   for(int i=0; i<v; i++){
      for(int v: adj[i])
         indegree[v]++;
   }

   queue<int> q;
   for(int i=0; i<v; i++){
      if(indegree[i]==0){
         q.push(i);
      }
   }

   int count = 0;
   while(q.empty()==false){
      int u = q.front();
      q.pop();

      for(int x: adj[u]){
         indegree[x]--;
         if(indegree[x]==0){
            q.push(x);
         }
      }
      count++;
   }
   if(count < v){
      cout<<"Cycle found.";
   }else
      cout<<"\nNo cycle found.";
}

void addEdge(vector<int> adj[], int u, int v){
   adj[u].push_back(v);
}

int main(){
   int v=5;
   vector<int> adj[v];
   addEdge(adj,0,1);
   addEdge(adj,4,1);
   addEdge(adj,1,2);
   addEdge(adj,2,3);
   addEdge(adj,3,1);

   DFScycleDetection(adj,v);

   return 0;
}
