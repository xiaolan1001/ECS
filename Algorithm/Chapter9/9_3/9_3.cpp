//【PAT A-1031】Hello World For U
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string input="";
    cin>>input;
    gg n1 = (input.size()+2)/3;
    gg n2 = input.size()+2-2*n1;
    for(int i=0; i<n1-1; ++i) {
        cout<<input[i];
        for(int j=0; j<n2-2;++j) {
            cout<<" ";
        }
        cout<<input[input.size()-i-1]<<"\n";
    }
    cout<<input.substr(n1-1,n2);
    return 0;
}