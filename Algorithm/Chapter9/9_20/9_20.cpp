//【PAT A-1033】To Fill or Not to Fill
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double ci,di,davg;
    gg ni;
    cin>>ci>>di>>davg>>ni;
    vector<array<double,2>>v(ni);
    for(auto& i:v) {
        cin>>i[1]>>i[0];
    }
    v.push_back({di,0});
    sort(v.begin(),v.end());
    if(abs(v[0][0])>1e-6) {
        cout<<"The maximum travel distance = 0.00";
        return 0;
    }
    gg cur=0;
    double ans=0,curd=0;
    cout<<fixed<<setprecision(2);
    while(cur<ni) {
        gg t=ni+1;
        for(gg i=cur+1;i<=ni and ci*davg+v[cur][0]>=v[i][0];++i) {
            if(v[i][1]<v[cur][1]) {
                t=i;
                break;
            } else if(t==ni+1 or v[i][1]<v[t][1]) {
                t=i;
            }
        }
        if(t==ni+1) {
            cout<<"The maximum travel distance = "<<v[cur][0]+ci*davg;
            return 0;
        }
        if(v[cur][1]>v[t][1]) {
            double p = (v[t][0]-v[cur][0])/davg;
            if(p>curd) {
                ans+=(p-curd)*v[cur][1];
                curd=0;
            } else {
                curd-=p;
            }
        } else {
            ans+=(ci-curd)*v[cur][1];
            curd=ci-(v[t][0]-v[cur][0])/davg;
        }
        cur=t;
    }
    cout<<ans;
    return 0;
}