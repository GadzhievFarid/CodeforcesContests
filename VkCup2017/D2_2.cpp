#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>

using namespace std;

void solve(vector<int>* g, int* main, int k, int n){
	stack<int> st;
	queue<int> q;
	for (int i = 0; i < k; ++i){
		st.push(main[i] - 1);
		for (int j = 0; j < g[main[i] - 1].size(); ++j){
				q.push(g[main[i] - 1][j]);
				st.push(g[main[i] - 1][j]);
		}
		while (!q.empty()){
			int temp = q.front();
			q.pop();
			for (int j = 0; j < g[temp].size(); ++j){
					q.push(g[temp][j]);
					st.push(g[temp][j]);
			}
		}
	}
	int temp; int size = st.size();
	set<int> set; queue<int> q2;
	for (int i = 0; i < size; ++i){
		temp = st.top();
		st.pop();
		if (set.find(temp) == set.end()){
			q2.push(temp + 1);
			set.insert(temp);
		}
	}
	int size2 = q2.size();
	cout << size2 << endl;
	for (int i = 0; i < size2; ++i){
		temp = q2.front();
		cout << temp << " ";
		q2.pop();
	}
}

void dfs(vector<int>* g, int start, int* &color, bool& cycle)
{
	color[start] = 1;
	for (int u = 0; u < g[start].size(); ++u)
		if (color[g[start][u]] == 0)
			dfs(g, g[start][u], color, cycle);
		else if (color[g[start][u]] == 1)
			cycle = true;
	color[start] = 2;
}

int main()
{
	int n, k, tmp, tmp2;
	cin >> n >> k;
	int* main = new int[k];
	for (int i = 0; i < k; ++i){
		cin >> main[i];
	}
	vector<int> *graph = new vector<int>[n];
	for (int i = 0; i < n; ++i){
		cin >> tmp;
		for (int j = 0; j < tmp; ++j){
			cin >> tmp2;
			graph[i].push_back(tmp2 - 1);
		}
	}
	int* color = new int[n];
	for (int i = 0; i < n; ++i)
		color[i] = 0;
	bool cycle = false;
	for (int i = 0; i < k; ++i){
		if (color[i] == 0)
			dfs(graph, main[i] - 1, color, cycle);
	}
	if (cycle == true)
		cout << -1;
	else{
		solve(graph, main, k, n);
	}
	delete[] main;
	for (int i = 0; i < n; ++i)
		vector<int>().swap(graph[i]);
	delete[] graph;
	system("pause");
	return 0;
}