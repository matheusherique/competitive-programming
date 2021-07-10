#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    while(n--){
        int c=1, d=0, gc, g, r;
        scanf("%d", &gc);
        while(gc--){
            scanf("%d", &g);
            if(g!=d+1 && d>0){
                r=c;
                d=0;
            } else {
                d=g;
            }

            ++c;
        }
        printf("%d\n", r);
    }
    return 0;
}