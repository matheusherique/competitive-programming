#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y;

    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &x, &y);
        if (x > y)
            printf(">\n");
        else if (x < y)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}