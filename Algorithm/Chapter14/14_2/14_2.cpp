//【PAT A-1013】Battle Over Cities
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

const gg MAX=1005;
vector<vector<gg>>graph(MAX);
vector<bool>visit(MAX);
void dfs(gg v) {
    visit[v]=true;
    for(gg i:graph[v]) {
        if(not visit[i]) {
            dfs(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi,ki,ai,bi;
    cin>>ni>>mi>>ki;
    for(gg i=0; i<mi; ++i) {
        cin>>ai>>bi;
        graph[ai].push_back(bi);
        graph[bi].push_back(ai);
    }
    while(ki--) {
        cin>>ai;
        fill(visit.begin(),visit.begin()+ni+1,false);
        visit[ai]=true;
        gg num=0;
        for(gg i=1; i<=ni; ++i) {
            if(not visit[i]) {
                ++num;
                dfs(i);
            }
        }
        cout<<num-1<<"\n";
    }
    return 0;
}