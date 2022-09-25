//【CCF CSP-20140904】最优配餐
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

using agg2=array<gg,2>;
const gg MAX=1005;
vector<vector<gg>>graph(MAX,vector<gg>(MAX));
vector<vector<bool>>inQueue(MAX,vector<bool>(MAX));
vector<agg2>dire{{0,1},{0-1},{-1,0},{1,0}};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi,ki,di,ai,bi,ci;
    cin>>ni>>mi>>ki>>di;
    queue<agg2>q;
    while(mi--) {
        cin>>ai>>bi;
        q.push({ai,bi});
        inQueue[ai][bi]=true;
    }
    while(ki--) {
        cin>>ai>>bi>>ci;
        graph[ai][bi]+=ci;
    }
    while(di--) {
        cin>>ai>>bi;
        graph[ai][bi]=-1;
    }
    gg ans=0;
    for(gg d=0; not q.empty(); ++d) {
        gg s=q.size();
        for(gg i=0; i<s; ++i) {
            auto v=q.front();
            q.pop();
            if(graph[v[0]][v[1]]>0) {
                ans+=d*graph[v[0]][v[1]];
            }
            for(auto& i:dire) {
                gg nx=v[0]+i[0],ny=v[1]+i[1];
                if(nx>0 and nx<=ni and ny>0 and ny<=ni and
                graph[nx][ny]!=-1 and not inQueue[nx][ny]) {
                    q.push({nx,ny});
                    inQueue[nx][ny]=true;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}

// #include <queue>
// #include <cstdio>
// using namespace std;

// int g[1010][1010];
// int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, 1, -1};
// struct P{
// 	int x, y, d;
// };
// int main()
// {
// 	int n, m, k, d; scanf("%d%d%d%d", &n, &m, &k, &d);
// 	int x, y, num;
// 	queue<P> q;
// 	for(int i = 0; i < m; i++)
// 	{
// 		scanf("%d%d", &x, &y);
// 		q.push(P{x, y, 0});
// 	}
// 	for(int i = 0; i < k; i++)
// 	{
// 		scanf("%d%d%d", &x, &y, &num);
// 		g[x][y] += num;
// 	}
// 	for(int i = 0; i < d; i++)
// 	{
// 		scanf("%d%d", &x, &y);
// 		g[x][y] = -1;
// 	}
// 	long long res = 0;
// 	while(!q.empty())
// 	{
// 		P t = q.front();
// 		int x = t.x, y = t.y, d = t.d;
// 		q.pop();
// 		for(int i = 0; i < 4; i++)
// 		{
// 			int nx = x + dx[i], ny = y + dy[i];
// 			if(nx<1 || nx>n || ny<1 || ny>n) continue;
// 			if(g[nx][ny] == -1) continue;
// 			res += g[nx][ny] * (d + 1);
// 			q.push(P{nx, ny, d + 1});
// 			g[nx][ny] = -1;
// 		}
// 	}
// 	printf("%lld\n", res);
// 	return 0;
// }
