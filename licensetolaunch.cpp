#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,ans, c=0, d=0;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &m);
        if(c == 0)
            ans=m;
        if(m<ans){
            ans=m;
            d=c;
        }
        ++c;
    }
    printf("%d\n", d);

    return 0;
}