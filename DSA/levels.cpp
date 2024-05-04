#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve() {
	ll n, row, col;

	cin>>n>>row>>col;

	vector<ll> adj[n];

	vector<ll> visited[n];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			visited[i].push_back(0);
		}
	}

	queue<pair<ll,pair<ll,ll>>> q;
	
	ll level = 0;
	q.push({level, {row, col}});
	visited[row][col] = 1;
	while(!q.empty()) {
		pair<ll,pair<ll,ll>> node = q.front();
		q.pop();
		
		ll temp_level = node.first;
		row = node.second.first;
		col = node.second.second;
		level = max(level, temp_level);

		if (row + 1 < n and visited[row+1][col] == 0) {
			q.push({temp_level+1, {row+1, col}});
			visited[row+1][col] = 1;
		}
		if (row - 1 >= 0 and visited[row-1][col] == 0) {
			q.push({temp_level+1, {row-1, col}});
			visited[row-1][col] = 1;
		}
		if (col - 1 >= 0 and visited[row][col-1] == 0) {
			q.push({temp_level+1, {row, col-1}});
			visited[row][col-1] = 1;
		}
		if (col + 1 < n and visited[row][col+1] == 0) {
			q.push({temp_level+1, {row, col+1}});
			visited[row][col+1] = 1;
		}
	}
	cout<<level<<endl;
}

int main () {
	solve();
}