//【PAT A-1084、PAT B-1029】Broken Keyboard、旧键盘
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s1,s2;
    cin>>s1>>s2;
    vector<bool>h(128);
    for(char c:s2)
        h[toupper(c)]=true;
    for(char c:s1) {
        if(not h[toupper(c)]) {
            cout<<(char)toupper(c);
            h[toupper(c)]=true;
        }
    }
    return 0;
}