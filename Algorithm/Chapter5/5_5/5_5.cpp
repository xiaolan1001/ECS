//【PAT A-1109、PAT B-1055】Group Photo、集体照
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    using Person = pair<string,gg>;
    gg ni,ki;
    cin>>ni>>ki;
    vector<Person>p(ni);
    for(gg i=0; i < ni; ++i) {
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end(),[](const Person& p1, const Person& p2) {
        return tie(p2.second,p1.first)<tie(p1.second,p2.first);
    });
    for(gg i=0; i < ni;) {
        gg left = i,right=i+ni/ki+(i==0?ni%ki:0);
        vector<gg>ans(right-left);
        gg mid = ans.size()/2;
        for(gg j=left; j<right; ++j) {
            gg k = j-left;
            if(k%2==1) {
                ans[mid-(k+1)/2]=j;
            } else {
                ans[mid+k/2]=j;
            }
        }
        i=right;
        for(gg j=0; j<ans.size(); ++j) {
            cout<<(j==0?"":" ")<<p[ans[j]].first;
        }
        cout<<"\n";
    }
    return 0;
}