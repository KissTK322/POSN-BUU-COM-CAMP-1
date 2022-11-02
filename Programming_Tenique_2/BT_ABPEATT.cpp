#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000010;

int a[N] , dis[N];
string str;
queue<char> q1;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q , k , len , cntb = 0 , cnta = 0 , mx = -1; cin >> q;
	while(q--){
		cin >> str;
		cin >> k;
		cntb = 0 , cnta = 0 , mx = -1;
		len = str.size();
		for(int i=0;i<len;i++){
			if(str[i] == 'A') q1.push(str[i]) , cnta++;
			else if(str[i] == 'B' && cntb < k) q1.push(str[i]) , cntb++ , cnta++;
			else{
				while(!q1.empty() && q1.front() != 'B'){
					q1.pop();
					cnta--;
				}
				q1.pop();
				q1.push(str[i]);
			}
			mx = max(cnta , mx);
		}
		cout << mx;
		while(!q1.empty()){
			q1.pop();
		}
	}
}