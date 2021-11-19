#include<bits/stdc++.h>
using namespace std;

void topologicalSort(vector<int> adj[], int v){
	vector<int> indegree(v,0);
	for(int i=0; i<v; i++){
		for(int v: adj[i]){
			indegree[v]++;
		}
	}

	queue<int> q;
	for(int i=0; i<v; i++){
		if(indegree[i] == 0){
			q.push(i);
		}
	}

	while(q.empty()==false){
		int u = q.front();
		q.pop();
		cout<< u <<" ";

		for(int x: adj[u]){
			if(--indegree[x]==0){
				q.push(x);
			}
		}
	}
}

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
}

int main(){
	int v= 5;
	vector<int> adj[v];
	addEdge(adj,0, 2); 
    addEdge(adj,0, 3); 
    addEdge(adj,1, 3); 
    addEdge(adj,1, 4); 
    addEdge(adj,2, 3);  

	cout << "Following is a Topological Sort of\n"; 
    topologicalSort(adj,v);


	return 0;
}
