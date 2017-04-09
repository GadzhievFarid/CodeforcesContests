#include <iostream>
#include <stack>
#include <queue>
#include <set>

using namespace std;

void bfs(int** graph, bool* visited){
	
}

void solve(int** graph, int* main, int k, int n, set<int> visited){
	stack<int> st;
	queue<int> q;
	for (int i = 0; i < k; ++i){
		if (visited.find(main[i] - 1) == visited.end())
			st.push(main[i] - 1);
		else
			continue;
		for (int j = 0; j < n; ++j){
			if (graph[main[i] - 1][j] == 1 && visited.find(j) == visited.end()){
				q.push(j);
				visited.insert(j);
				st.push(j);
			}
		}
		while (!q.empty()){
			int temp = q.front();
			q.pop();
			for (int j = 0; j < n; ++j){
				if (graph[temp][j] == 1 && visited.find(j) == visited.end()){
					q.push(j);
					st.push(j);
					visited.insert(j);
				}	
			}
		}
	}
	int temp;
	cout << "OUTPUT" << endl;
	int size = st.size();
	for (int i = 0; i < size; ++i){
		temp = st.top();
		cout << temp + 1 << " ";
		st.pop();
	}

}

int main()
{
	int n, k;
	cin >> n >> k;
	int** graph = new int*[n];
	for (int i = 0; i < n; ++i)
		graph[i] = new int[n];
	int* main = new int[k];
	set<int> visited;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			graph[i][j] = 0;

	for (int i = 0; i < k; ++i){
		cin >> main[i];
	}
	int count, tmp;
	for (int i = 0; i < n; ++i)
	{
		cin >> count;
		for (int j = 0; j < count; ++j)
		{
			cin >> tmp;
			graph[i][tmp - 1] = 1;
		}
	}
	//for (int i = 0; i < n; ++i){
	//	for (int j = 0; j < n; ++j)
	//		cout << graph[i][j] << " ";
	//	cout << endl;
	//}
	solve(graph, main, k, n, visited);
	system("pause");
	return 0;
}