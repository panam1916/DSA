#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n;
	cin>>n;
	ll cnt = 0;
	vector<bool> primes(1e5, true);
	primes[0] = false;
	primes[1] = false;
	for(ll i=2;i<1e5;i++) {
		if (primes[i]) {
			cnt += 1;
			if (cnt == n) {
				cout<<i<<endl;
				break;
			}
			for(int j=i+i;j<1e5;j+=i) {
				primes[j] = false;
			}
		}
	}

}

