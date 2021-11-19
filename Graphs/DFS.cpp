#include<bits/stdc++.h>
using namespace std;

void dfsrecursive(vector<int> adj[], int s, bool visited[]);

void dfs(vector<int> adj[], int s, int v){
	bool visited[v];
	for(int i=0; i<v; i++)
		visited[i] = false;

	
	dfsrecursive(adj,s,visited);
}

void dfsrecursive(vector <int> adj[], int s, bool visited[]){
	visited[s] = true;
	cout<< s << " ";

	for(int v: adj[s]){
		if(visited[v] == false)
			dfsrecursive(adj,v,visited);
	}
}

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main(){
	int v =5;
	vector<int> adj[v];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,1,4);
	addEdge(adj,3,4);

	cout<<"Following is Depth first search traversing: \n";
	dfs(adj,0,v);

	return 0;
}
