#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;

    scanf("%d %d", &x,&y);

    if (x == 0 && y == 1)
        printf("ALL GOOD\n");
    else if (y == 1)
        printf("IMPOSSIBLE\n");
    else if (x%(1-y) == 0)
        printf("%d\n", x/(1-y));
    else
        printf("%.9f\n", x/(1.0-y));

    return 0;
}