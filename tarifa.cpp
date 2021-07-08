#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, m, n, p, sum=0;

    scanf("%d", &x);
    scanf("%d", &n);
    m=n;

    while(n--){
        scanf("%d", &p);
        sum+=p;
    }

    printf("%d\n", x*(m+1) - sum);

    return 0;
}