#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n , m , cnt; cin >> cnt;
	for(int i=0;i<cnt;i++) cin >> n >> m , v.push_back({n,-m});
	sort(v.begin() , v.end());
	for(int i=0;i<cnt;i++) cout << v[i].first << " " << -(v[i].second) << "\n";

}