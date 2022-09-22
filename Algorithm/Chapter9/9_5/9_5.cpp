//【PAT A-1148、PAT B-1089】Werewolf-Simple Version、狼人杀-简单版
#include<bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni;
    cin>>ni;
    vector<gg>input(ni+1);
    for(gg i=1; i<=ni; ++i) {
        cin>>input[i];
    }
    for(gg i=1; i<=ni; ++i) {
        for(gg j=i+1; j<=ni; ++j) {
            gg lier=0,wolflier=0;
            for(gg k=1; k<=ni; ++k) {
                if(input[k]>0 xor (abs(input[k])!=i and abs(input[k])!=j)) {
                    ++lier;
                    if(k==i or k==j) {
                        ++wolflier;
                    }
                }
            }
            if(lier==2 and wolflier==1) {
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
    cout<<"No Solution";
    return 0;
}