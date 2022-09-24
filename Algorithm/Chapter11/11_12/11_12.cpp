//【PAT A-1061、PAT B-1014】Dating、福尔摩斯的约会
#include <bits/stdc++.h>
using namespace std;
using gg = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout<<setfill('0');
    unordered_map<char,string>week={
        {'A',"MON"},{'B',"TUE"},{'C',"WED"},{'D',"THU"},
        {'E',"FRI"},{'F',"SAT"},{'G',"SUN"}
    };
    unordered_map<char,gg>hour;
    for(gg i=0; i<24; ++i)
        hour.insert({i<10?i+'0':i-10+'A',i});
    string s1,s2;
    cin>>s1>>s2;
    for(gg i=0,c=0; i<min(s1.size(),s2.size()); ++i) {
        if(s1[i]==s2[i] and c==0 and week.count(s1[i])) {
            cout<<week[s1[i]]<<" ";
            ++c;
        } else if(s1[i]==s2[i] and c==1 and hour.count(s1[i])) {
            cout<<setw(2)<<hour[s1[i]]<<':';
            ++c;
        }
    }
    cin>>s1>>s2;
    for(gg i=0,c=0; i<min(s1.size(),s2.size()); ++i) {
        if(s1[i]==s2[i] and isalpha(s1[i])) {
            cout<<setw(2)<<i;
            break;
        }
    }
    return 0;
}