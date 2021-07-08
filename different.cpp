#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int n, m;

    while(scanf("%lld %lld", &n, &m)!=EOF) {
        printf("%lld\n", abs(m-n));
    }
    return 0;
}