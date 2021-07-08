#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    double n, m;

    scanf("%d", &t);

    while(t--){
        scanf("%lf %lf", &n,&m);

        printf("%d\n",(int)(n/3)*(int)(m/3));

    }

    return 0;
}