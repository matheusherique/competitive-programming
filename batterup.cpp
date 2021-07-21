#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, c=0, sum=0, t;

    scanf("%d", &n);

    while (n--){
        scanf("%d", &t);
        if(t>=0)sum+=t,c+=1;
    }
    printf("%lf\n", (double)sum/(double)c);
    
}