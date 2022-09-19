//【CCF CSP-20151202】消除类游戏
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi;
    cin>>ni>>mi;
    vector<vector<gg>> ai(ni, vector<gg>(mi));
    for(gg i=0; i < ni; ++i) {
        for(gg j=0; j < mi; ++j) {
            cin>>ai[i][j];
        }
    }
    //处理每行连续超过3次的数字
    for(gg i=0; i < ni; ++i) {
        gg k=0,num=0,last=0;
        for(gg j=0; j<=mi; ++j) {
            if(j==mi || abs(ai[i][j])!=last) {
                if(num >= 3) {
                    for(gg t=0; t<num; ++t) {
                        ai[i][k+t]=-abs(ai[i][k+t]);
                    }
                }
                if(j<mi) {
                    last=abs(ai[i][j]);
                    num=1;
                    k=j;
                }
            } else {
                ++num;
            }
        }
    }

    //处理每列连续超过3次的数字
    for(gg j=0; j < mi; ++j) {
        gg k=0,num=0,last=0;
        for(gg i=0; i<=ni; ++i) {
            if(i==ni || abs(ai[i][j])!=last) {
                if(num >= 3) {
                    for(gg t=0; t<num; ++t) {
                        ai[k+t][j]=-abs(ai[k+t][j]);
                    }
                }
                if(i<ni) {
                    last=abs(ai[i][j]);
                    num=1;
                    k=i;
                }
            } else {
                ++num;
            }
        }
    }
    for(auto& i:ai) {
        for(auto j:i) {
            cout<<max(j,0ll)<<" ";
        }
        cout << "\n";
    }

    return 0;
}