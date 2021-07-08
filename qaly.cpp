#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    double q, y, sum=0.0;

    scanf("%d", &n);

    while(n--){
        scanf("%lf %lf", &q, &y);
        sum+=q*y;
    }

    printf("%.3f\n", sum);

    return 0;
}