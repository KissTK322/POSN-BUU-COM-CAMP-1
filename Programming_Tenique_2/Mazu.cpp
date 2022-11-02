#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = INT_MAX;

stack<char> st;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q , id;
	char opr;
	cin >> q;
	while(q--){
		cin >> opr;
		if(st.empty()) st.push(opr);
		else if(opr == st.top() && !st.empty()) st.pop();
		else st.push(opr);
	}
	cout << st.size() << "\n";
	if(!st.empty())while(!st.empty()) cout << st.top() << "\n" , st.pop();
	else cout << "empty\n";
}