#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;
typedef pair <unsigned long long, int> pii; 

int main(){
	ll n, m;
	cin >> n >> m;

	queue <pii> q;

	if(n == m) cout << "0\n";
	else{
		ll pd, pt, cache;
		q.push(make_pair(n, 0));
    	bool flag = true;
		while(!q.empty()){
			pd = q.front().first * 2;
			cache = q.front().second + 1;

			if(pd == m){cout << cache << "\n"; flag = false; break;}
			else if(pd < m)
				q.push(make_pair(pd, cache));

			pt = q.front().first * 3;
			cache = q.front().second + 1;

			if(pt == m){cout << cache << "\n"; flag = false; break;}
			else if(pt < m)
				q.push(make_pair(pt, cache));
      		
			q.pop();
		}
    if(flag) cout << "-1\n";
	}
	return 0;
}
