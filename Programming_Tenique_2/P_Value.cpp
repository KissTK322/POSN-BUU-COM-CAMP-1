#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 10010;

int ans[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int A , cnt = 0; cin >> A;
	if(A < 0) { cout << "-1\n"; return 0; }
	else if(A==0) { cout << "10\n"; return 0; }
	else if(A<10) { cout << A << "\n"; return 0; }
	for(int i=9;i>1 && A>1;i--){
		while(A % i == 0){
			ans[cnt] = i , A/=i , cnt++; 
		}
	}
	if(A != 1) { cout << "-1\n"; return 0;}
	for(int i=cnt-1;i>=0;i--) cout << ans[i];
}