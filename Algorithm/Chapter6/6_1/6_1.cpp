//【PAT B-1009】说反话
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    stack<string> st;
    while(cin>>s) {
        st.push(s);
    }
    while(not st.empty()) {
        cout<<st.top();
        st.pop();
        cout<<(st.empty() ? "":" ");
    }
    return 0;
}