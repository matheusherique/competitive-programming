#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, c=0, nc, n;

    scanf("%d", &t);

    while(t--){
        vector<int> v;
        scanf("%d", &nc);
        while(nc--){
            scanf("%d", &n);
            v.push_back(n);
        }
        auto it = max_element(v.begin(), v.end());
        printf("Case %d: %d\n", ++c, *it);
    }

    return 0;
}