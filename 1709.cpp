#include <bits/stdc++.h>

using namespace std;

void price(double p, double a, double b, double c, double d, double n){
    double ans, min=-1, max=-1, dec=0.0;
    for(int i=1; i<=n; i++){
        ans = p*(sin(a*i+b)+cos(c*i+d)+2);

        if(i==1){
            max=ans;
            min=ans;
        }
        if(ans>max){
            max=ans;
            min=ans;
        }
        if(ans<min)
            min=ans;
        
        if(max-min>dec)
            dec=max-min;
    }
    printf("%.6lf\n", dec);

}

int main(){
    int p, a, b, c, d, n;
    while(scanf("%d %d %d %d %d %d", &p,&a,&b,&c,&d,&n)!=EOF)
    price((double)p,(double)a,(double)b,(double)c,(double)d,(double)n);

    return 0;
}