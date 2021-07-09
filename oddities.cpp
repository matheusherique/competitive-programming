#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;

    scanf("%d", &n);

    while (n--){
        scanf("%d", &x);
        x%2 == 0? printf("%d is even\n", x):printf("%d is odd\n", x);
    }

    return 0;
}