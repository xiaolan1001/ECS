//【PAT A-1089、PAT B-1035】Insert or Merge、插入与归并
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni;
    cin>>ni;
    vector<gg>v1(ni),v2(ni);
    for(gg& i:v1) {
        cin>>i;
    }
    for(gg& i:v2) {
        cin>>i;
    }
    vector<vector<gg>>inserts,merges;
    vector<gg>v=v1;
    for(gg i=2; i<=ni; ++i) {
        sort(v.begin(),v.begin()+i);
        inserts.push_back(v);
    }
    v=v1;
    for(gg i=2; i<=ni; i*=2) {
        for(gg j=0; j<ni; j+=i) {
            sort(v.begin()+j,v.begin()+min(j+i,ni));
        }
        merges.push_back(v);
    }
    for(gg i=0; i<inserts.size(); ++i) {
        if(inserts[i]==v2) {
            cout<<"Insertion Sort\n";
            for(gg j=0; j<ni; ++j) {
                cout<<inserts[i+1][j]<<(j==ni-1?"\n":" ");
            }
            break;
        }
    }
    for(gg i=0; i<merges.size(); ++i) {
        if(merges[i]==v2) {
            cout<<"Merge Sort\n";
            for(gg j=0; j<ni; ++j) {
                cout<<merges[i+1][j]<<(j==ni-1?"\n":" ");
            }
            break;
        }
    }
    return 0;
}