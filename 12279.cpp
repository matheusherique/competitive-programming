#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, c=0;

    while(scanf("%d", &n)){
        if(n==0)break;
        int sum=0, m;
        while(n--){
            scanf("%d", &m);
            m>0?sum+=1:sum-=1;
        }
        printf("Case %d: %d\n", ++c, sum);
    }
    return 0;
}