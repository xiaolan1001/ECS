//【PAT B-1072】开学寄语
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi,ki,ai;
    cin>>ni>>mi;
    vector<gg>v(mi);
    for(gg i=0; i<mi; ++i) {
        cin>>v[i];
    }
    array<gg,2>ans{};
    string name;
    while(ni--) {
        cin>>name>>ki;
        bool output=false;
        while(ki--) {
            cin>>ai;
            if(any_of(v.begin(),v.end(),[ai](int a) {
                return a==ai;
            })) {
                if(not output) {
                    cout<<name<<":";
                    output=true;
                    ++ans[0];
                }
                cout<<' '<<setfill('0')<<setw(4)<<ai;
                ++ans[1];
            }
        }
        if(output)
            cout<<'\n';
    }
    cout<<ans[0]<<' '<<ans[1];
    return 0;
}