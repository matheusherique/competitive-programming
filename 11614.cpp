#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    double w;


    scanf("%d", &n);
    while(n--){
        scanf("%lf", &w);

        printf("%d\n", (int)(sqrt(1 + 8 * w)-1)/2);
    }

    return 0;
}