// //【PAT A-1104、PAT B-1049】Sum of Number Segments、数列的片段和
// #include <bits/stdc++.h>
// using namespace std;
// using gg = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     gg ni;
//     cin>>ni;
//     double s=0.0,ai;
//     for(gg i=0; i<ni; ++i) {
//         cin>>ai;
//         s+=(i+1)*(ni-i)*ai;
//     }
//     cout<<fixed<<setprecision(2)<<s;
//     return 0;
// }

#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int n;
double a[100010];

int main(){

    scanf("%d",&n);

    double sum = 0, temp;
    for(int i = 0; i < n; i++){
        scanf("%lf",&temp);
        sum += temp*(i+1)*(n-i);
    }

    printf("%.2f\n",sum);

    return 0;
}

