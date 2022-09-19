//【PAT B-1052】卖个萌
#include <bits/stdc++.h>
using namespace std;
using gg = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    array<vector<string>,3>e{}; //存储表情符号
    for(auto& v:e) {
        string line;
        getline(cin,line);
        for(auto i=line.find('['); i!=-1; ) {
            auto j = line.find(']',i);
            v.push_back(line.substr(i+1,j-i-1));
            i = line.find('[',j);
        }
    }
    gg ki,ai;
    cin>>ki;
    while(ki--) {
        string out;
        bool f = true;
        for(auto i=0; i<5; ++i) {
            cin>>ai;
            const auto& v=i==2 ? e[2]:(i==0 || i==4) ? e[0]:e[1];
            if(ai-1>=v.size()) {
                f = false;
            } else {
                out+=v[ai-1]+(i==0 ? "(":i==3 ? ")":"");
            }
        }
        f ? cout<<out<<'\n':cout<<"Are you kidding me? @\\/@\n";
    }
    return 0;
}