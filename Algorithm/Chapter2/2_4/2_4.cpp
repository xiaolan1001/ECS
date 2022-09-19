//【PAT B-1006】换个格式输出整数
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string ni;
    cin>>ni;
    int s = ni.size();
    for(int i=0; i < s; ++i) {
        for(char j='1'; j <= ni[i]; ++j) {
            cout<<(i==s-3 ? 'B':i==s-2 ? 'S':j);
        }
    }
    return 0;
}