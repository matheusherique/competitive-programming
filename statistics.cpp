#include <bits/stdc++.h>

using namespace std;

int main(){
    int c=0, nc, n;

    while(scanf("%d", &nc)!=EOF){
        vector<int> vec;
        while(nc--){
            scanf("%d", &n);
            vec.push_back(n);
        }
        auto min = min_element(vec.begin(), vec.end());
        auto max = max_element(vec.begin(), vec.end()); 

        printf("Case %d: %d %d %d\n", ++c, *min, *max, *max - *min);
    }

    return 0;
}