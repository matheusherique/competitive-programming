#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sum=0;
    float a,b,c,d;

    scanf("%d", &n);

    while(n--){
        scanf("%f %f %f %f", &a,&b,&c,&d);
        if((a<=56 && b<=45 && c<=25 || a+b+c<=125.00) && d<=7.00){
            sum+=1;
            printf("1\n");
        } else
            printf("0\n");
    }
    printf("%d\n", sum);
}