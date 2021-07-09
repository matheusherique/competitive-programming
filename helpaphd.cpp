#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;

    scanf("%d", &n);

    while(n--){

        if(scanf("%d+%d", &a,&b) == 0){
            printf("skipped\n");
            while ( getchar() != '\n' );
        } else {
            printf("%d\n", a+b);
        }

        
    }

    return 0;
}