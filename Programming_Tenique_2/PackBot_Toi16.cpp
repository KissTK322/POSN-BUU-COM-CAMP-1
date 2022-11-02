#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 10010;

int ans[N];
string str;
stack<int>num;
stack<char>opr;

void calibrate(){
	double p;
	int num1 = num.top();
	num.pop();
	int num2 = num.top();
	num.pop();
	char op = opr.top();
	opr.pop();
	if(op == '1') p = 0.04;
	else if(op == '2') p = 0.08;
	else p = 0.16;
	int cal = (num1 + num2) +  p * (num1 + num2);
	num.push(cal);
}


int main(){
	cin.tie(0)->sync_with_stdio(0);
	int len ; cin >> str;
	for(auto e : str){
		if(isalpha(e)) num.push(20);
		else if(e == '[') opr.push(e);
		else if(e == ']'){
			while(!opr.empty() && opr.top() != '[') calibrate();
			if(opr.top() == '[') opr.pop();
		}
		else {
			while(!opr.empty() && e <= opr.top() && (opr.top() == '1' || opr.top() == '2' || opr.top() == '3') ) calibrate();
			opr.push(e);

		}
	}
	while(!opr.empty()){
		calibrate();
	}
	cout << num.top();
}