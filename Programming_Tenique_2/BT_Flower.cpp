#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = INT_MAX;

stack<int> st;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q , opr , id;cin >> q;
	while(q--){
		cin >> opr;
		if(opr == 1) cin >> id , st.push(id);
		else {
			if(st.empty()) cout << "-1\n";
			else cout << st.top() << "\n" , st.pop();
		}
	}
}