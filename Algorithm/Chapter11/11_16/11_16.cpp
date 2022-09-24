//【PAT A-1100、PAT B-1044】Mars Numbers、火星数字
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    array<string,13>low={
        "tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov",
        "dec"
    };
    array<string,13>high={
        "tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer",
        "jou"
    };
    unordered_map<string,gg>temp;
    for(gg i=0; i<13; ++i) {
        temp[low[i]]=i;
        temp[high[i]] = i*13;
    }
    gg ni;
    cin>>ni;
    cin.get();
    string digit="";
    while(ni--) {
        getline(cin,digit);
        if(isdigit(digit[0])) {
            gg k = stoi(digit);
            if(k/13!=0) {
                cout<<high[k/13];
            }
            if(k/13!=0 && k%13!=0) {
                cout<<' ';
            }
            if(k/13==0 || k%13!=0) {
                cout<<low[k%13];
            }
            cout<<'\n';
        } else {
            gg k=0;
            stringstream stream(digit);
            while(stream>>digit) {
                k+=temp[digit];
            }
            cout<<k<<'\n';
        }
    }
    return 0;
}