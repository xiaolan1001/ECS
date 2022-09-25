//【CCF CSP-20170304】地铁修建
#include<bits/stdc++.h>
using namespace std;
using gg = long long;

struct Edge{
    gg u,v,cost;
    Edge(gg up,gg vp,gg cp):u(up),v(vp),cost(cp){}
};
vector<Edge>edges;
vector<gg>ufs(1e5+5);
gg findRoot(gg x) {
    return ufs[x]==x?x:ufs[x]=findRoot(ufs[x]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi;
    cin>>ni>>mi;
    while(mi--) {
        gg ai,bi,ci;
        cin>>ai>>bi>>ci;
        edges.push_back(Edge(ai,bi,ci));
    }
    iota(ufs.begin(),ufs.end(),0);
    gg cost=0;
    sort(edges.begin(),edges.end(),
    [](const Edge& e1,const Edge& e2) {
        return e1.cost<e2.cost;
    });
    for(gg i=0; i<edges.size() and findRoot(1)!=findRoot(ni);++i) {
        gg ua = findRoot(edges[i].u),ub=findRoot(edges[i].v);
        if(ua!=ub) {
            cost=max(cost,edges[i].cost);
            ufs[ua]=ub;
        }
    }
    cout<<cost;
    return 0;
}