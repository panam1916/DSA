#include<bits/stdc++.h>
    using namespace std;

typedef long long int ll;

void solve() {
	ll n;
	cin>>n;
	vector<ll> adj[n];
	for(int i=0;i<n-1;i++) {
		ll u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<bool> visited(n, false);

	queue<ll> q;
	q.push(1);
	visited[1] = true;

	while(!q.empty()) {
		ll node = q.front();
		q.pop();
		cout<<node<<endl;
		for(ll adj_node: adj[node]) {
			if (!visited[adj_node]) {
				q.push(adj_node);
				visited[adj_node] = true;
			}
		}
	}
}

int main () {
	solve();
}
