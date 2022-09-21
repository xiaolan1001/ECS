//【CCF CSP-20140302】窗口
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

struct Window{
    gg num,x1,y1,x2,y2;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    gg ni,mi;
    cin>>ni>>mi;
    list<Window>windows(ni);
    gg num=1;
    for(auto i=windows.rbegin(); i!=windows.rend();++i) {
        cin>>i->x1>>i->y1>>i->x2>>i->y2;
        i->num=num++;
    }
    gg x,y;
    while(mi--) {
        cin>>x>>y;
        auto i=
        find_if(windows.begin(),windows.end(),[x,y](const Window&w){
            return w.x1<=x and w.x2>=x && w.y1<=y && w.y2>=y;
        });
        if(i==windows.end()) {
            cout<<"IGNORED\n";
            continue;
        }
        cout<<i->num<<"\n";
        windows.push_front(*i);
        windows.erase(i);
    }
    return 0;
}