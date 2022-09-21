//【PAT B-1043】输出PATest
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string si,out="PATest";
    unordered_map<char,gg>um;
    cin>>si;
    for(char c:si) {
        if(out.find(c) != -1) {
            ++um[c];
        }
    }
    while(not um.empty()) {
        for(char c:out) {
            if(um.count(c)) {
                cout<<c;
                if(--um[c]==0) {
                    um.erase(c);
                }
            }
        }
    }
    
    return 0;
}