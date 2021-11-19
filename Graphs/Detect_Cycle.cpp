#include<bits/stdc++.h>
using namespace std;

bool dfs_recur(vector<int> adj[], int s, bool visited[], int parent){
	visited[s] = true;

	for(int v: adj[s]){
		if(visited[v] == false){
			if(dfs_recur(adj, v, visited, s)==true){
				return true;
			}
		}
		else if(v != parent){
			return true;
		}
	}
	return false;
}

bool dfs(vector<int> adj[], int v){
	bool visited[v];
	for(int i=0; i<v; i++)
		visited[i] = false;

	for(int i=0; i<v; i++){
		if(visited[i] == false){
			if(dfs_recur(adj,i,visited,-1)==true)
				return true;
		}
	}
	return false;
}

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main(){
	int v =6;
	vector<int> adj[v];
	addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,4); 
	addEdge(adj,4,5); 
	addEdge(adj,2,3);
	addEdge(adj,1,3);

	if(dfs(adj,v)== true){
		cout<<"Cyclic Graph.";
	}else
		cout<<"Non-Cyclic Graph.";


	return 0;
}
