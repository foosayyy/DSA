#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], int s, stack<int>&st, bool visited[]){
	visited[s] = true;
	for(int v: adj[s]){
		if(visited[v] == false){
			dfs(adj,v,st,visited);
		}
	}
	st.push(s);
}

void topologicalSortDFS(vector<int> adj[], int v){
	bool visited[v];
	for(int i=0; i<v; i++){
		visited[i] = false;
	}

	stack<int> st;
	for(int i=0; i<v; i++){
		if(visited[i]==false)
			dfs(adj,i,st,visited);
	}

	while(st.empty()==false){
		int u= st.top();
		st.pop();
		cout<< u << " ";
	}
}

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
}

int main(){
	int v=5;
	std::vector<int> adj[v];
	addEdge(adj,0, 1); 
    addEdge(adj,1, 3); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 4); 
    addEdge(adj,2, 4); 
    
    cout<<"Following is Topologically sorted array using DFS: "<<endl;
    topologicalSortDFS(adj,v);

	return 0;
}
