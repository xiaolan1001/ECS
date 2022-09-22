//【PAT B-1027】打印沙漏
#include<bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni;
    char ci;
    cin>>ni>>ci;
    gg k=(gg)sqrt((ni+1)/2*1.0),row=2*k-1;
    vector<vector<char>>ans(row,vector<char>(row,' '));
    for(gg i=0; i<k; ++i) {
        for(gg j=k-1-i; j<k+i; ++j) {
            ans[k-1-i][j] = ans[k-1+i][j]=ci;
        }
    }
    for(gg i=0; i<row; ++i) {
        bool output = true;
        for(gg j=0; j<row; ++j) {
            if(ans[i][j]==' ' and !output)
                break;
            if(ans[i][j]!=' ') {
                output=false;
            }
            cout<<ans[i][j];
        }
        cout<<"\n";
    }
    cout<<ni-2*k*k+1;
    return 0;
}