#include <bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define nline "\n"
#define  pii pair<int,int>

int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

int KnightWalk(int N, int Sx, int Sy, int Fx, int Fy)
{


	vector<vector<int>> dist(N + 1, vector<int>(N + 1, 1e9));
	vector<vector<int>> vis(N + 1, vector<int>(N + 1, 0));

	pii start = {Sx, Sy}, end = {Fx, Fy};

	dist[start.ff][start.ss] = 0;
	vis[start.ff][start.ss] = 1;
	queue<pair<int, int>> q ;
	q.push(start);

	auto isValid = [&](int x, int y ) {
		if (x > N or y > N or  x <= 0 or y <= 0 or vis[x][y] ) return false ;
		return true ;
	};

	while (q.size()) {
		pair<int, int> curr = q.front();
		vis[curr.ff][curr.ss] = 1;
		q.pop();
		int currd = dist[curr.ff][curr.ss];

		for (int i = 0 ; i < 8 ; i++) {
			int x = dx[i] + curr.ff;
			int y = dy[i] + curr.ss;
			if (isValid(x, y) and  currd + 1 < dist[x][y]) {
				//relaxation
				dist[x][y] = currd + 1;
				q.push({x, y});
			}
		}

	}

	if (vis[end.ff][end.ss])
		return dist[end.ff][end.ss]  ;


	else return -1 ;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int test_case;
	cin >> test_case;

	while (test_case--)
	{
		int N, Sx, Sy, Fx, Fy;
		cin >> N >> Sx >> Sy >> Fx >> Fy;

		cout << KnightWalk(N, Sx, Sy, Fx, Fy) << "\n";
	}
}