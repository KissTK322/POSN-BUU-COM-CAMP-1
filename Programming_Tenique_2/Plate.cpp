#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1010;

queue<int> q , classs[N];
int classroom[N];

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int cls , stu , id , clss; 
	char opr;
	cin >> cls >> stu;
	for(int i=0;i<stu;i++) cin >> clss >> id , classroom[id] = clss;
	while(1){
		cin >> opr;
		if(opr == 'X'){
			cout << 0;
			break;
		}
		else if(opr == 'E'){
			cin >> id;
			if(classs[classroom[id]].empty()) q.push(classroom[id]);
			classs[classroom[id]].push(id);
		}
		else if(opr == 'D'){
			if(q.empty()) {
				cout << "empty\n";
				continue;
			}
			cout << classs[q.front()].front() << "\n";
			classs[q.front()].pop();
			if(classs[q.front()].empty()) q.pop();
		}
	}
}