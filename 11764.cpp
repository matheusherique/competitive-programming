#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc, nc, n, jp;
    scanf("%d", &tc);
    for(int i=1; i <=tc; i++){
        vector<int> h,l,js;
        scanf("%d", &nc);
        for(int j=0; j<nc; j++){
            scanf("%d", &jp);
            js.push_back(jp);
            if(j > 0){
                if(js[j] > js[j-1])
                    h.push_back(jp);
                else if (js[j] < js[j-1])
                    l.push_back(jp);
            }
        }
        printf("Case %d: %d %d\n", i, h.size(), l.size());
    }
    return 0;
}