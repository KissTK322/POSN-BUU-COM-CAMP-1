#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 200;

stack<int> st;
char opr[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int q , len , temp , sum = 0 , ans = 0; cin >> q;
	while(q--){
		temp = 0 , sum = 0 , ans = 0;
		cin >> opr;
		len = strlen(opr);
		for(int i=0;i<len;i++) {
			if(isalpha(opr[i])){
				if(opr[i] == 'C') st.push(12);
				else if(opr[i] == 'H') st.push(1);
				else if(opr[i] == 'O') st.push(16);
			}
			else if(opr[i] == '(') st.push(-1);
			else if(isdigit(opr[i])){
				temp = st.top() * (opr[i]-'0');
				st.pop();
				st.push(temp);
			}
			else if(opr[i] == ')'){
				while(st.top() != -1 && !st.empty()){
					sum += st.top();
					st.pop();
				}
				st.pop();
				st.push(sum);
				sum = 0;
			}

		}
		while(!st.empty()){
			ans += st.top();
			st.pop();
		}
		cout << ans << "\n";
 	}
}