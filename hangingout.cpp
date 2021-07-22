#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, x, n, sum=0, ans=0;
    char c[5];

    scanf("%d %d", &l, &x);

    while(x--){
        scanf("%s %d", c, &n);

        c[0]=='e'?n:n*=-1;
        if(sum+n<=l)
            sum+=n;
        else
            ans+=1;
    }
    printf("%d\n",ans);
}