#include<bits/stdc++.h>
using namespace std;

void dfsrecur(vector<int> adj[], int s, bool visited[]){
	visited[s] = true;
	

	for(int v: adj[s]){
		if(visited[v] == false){
			dfsrecur(adj, v, visited);
		}
	}
}

int dfs(vector<int> adj[], int s, int v){
	int count =0;
	bool visited[v];
	for(int i=0; i<v; i++)
		visited[i] = false;

	for(int i=0; i<v; i++){
		if(visited[i] == false){
			count++;
			dfsrecur(adj, i, visited);
		}
	}

	return count;
}

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main(){
	int v =5;
	vector<int> adj[v];
	addEdge(adj,0,1); 
	addEdge(adj,2,3); 
	addEdge(adj,2,4); 
	addEdge(adj,3,4);

	cout<<"No. of connected graphs: \n"<<dfs(adj,0,v);

	return 0;
}
