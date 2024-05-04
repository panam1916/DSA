 #include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//using recursion for chekc visited in adjancy list

void dfs(int node, vector<ll> adj[], vector<bool> &visited) {
	cout<<node<<endl;
	visited[node] = true;
	for(ll adj_node: adj[node]) {
		if (!visited[adj_node]) {
			dfs(adj_node, adj, visited);
		}
	}
}

void solve() {
	ll n;
	cin>>n;
	vector<ll> adj[n];
	for(ll i=0;i<n-1;i++) {
		ll u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<bool> visited(n, false);

	dfs(0, adj, visited);
}

int main() {
	solve();
}
