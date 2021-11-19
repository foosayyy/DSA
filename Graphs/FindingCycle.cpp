#include<bits/stdc++.h>
using namespace std;

bool dfsrec(vector<int> adj[], int s, bool visited[], bool recSt[]){
   visited[s] = true;
   recSt[s] = true;

   for(int v: adj[s]){
      if(visited[v] == false && dfsrec(adj, v, visited, recSt)==true){
         return true;
      }
      else if(recSt[s] == true)
         return true;
   }

   return false;
}

bool dfs(vector<int> adj[], int v){
   bool visited[v];
   for(int i=0; i<v; i++)
      visited[i] = false;

   bool recSt[v];
   for(int i=0; i<v; i++)
      recSt[i] = false;

   for(int i=0; i<v; i++){
      if(visited[i] == false){
         if(dfsrec(adj,i,visited,recSt)==true){
            return true;
         }
      }
   }
   return false;
}

void addEdge(vector<int> adj[], int u, int v){
   adj[u].push_back(v);
}

int main(){
   int v= 6;
   vector<int> adj[v];
   addEdge(adj,0,1);
   addEdge(adj,2,1);
   addEdge(adj,2,3);
   addEdge(adj,3,4);
   addEdge(adj,4,5);
   addEdge(adj,5,3);



   if(dfs(adj,v)==true){
      cout<<"Cycle found";
   }else
      cout<<"Cycle not found";

   return 0;
}
