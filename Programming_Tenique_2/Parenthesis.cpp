#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200;

stack<char> st;
char opr[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q , len;
	cin >> q;
	while(q--){
		cin >> opr;
		len = strlen(opr);
		for(int i=0;i<len;i++){
			if(st.empty()) st.push(opr[i]);
			else if(opr[i] == ')' && st.top() == '(' && !st.empty()) st.pop();
			else if(opr[i] == ']' && st.top() == '[' && !st.empty()) st.pop();
			else st.push(opr[i]);
		}
		if(!st.empty()) cout << "No" << "\n";
		else cout << "Yes" << "\n";
		while(!st.empty()) st.pop();
	}
}