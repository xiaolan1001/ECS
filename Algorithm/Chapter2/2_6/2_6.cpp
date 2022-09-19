//【PAT B-1067】试密码
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string ci,in;
    gg ni;
    cin>>ci>>ni;
    cin.get(); //吸收换行符
    while(getline(cin,in) && in!="#") {
        if(in == ci) {
            cout << "Welcome in\n";
            break;
        } else {
            cout << "Wrong password: " << in << '\n';
            if(--ni == 0) {
                cout << "Account locked\n";
                break;
            }
        }
    }
    return 0;
}