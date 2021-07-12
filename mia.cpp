#include <bits/stdc++.h>
using namespace std;

int points(int p){
    int r=0, j;

    if (p == 21 || p == 12){
        p = 7*1000;
    } else if (p%11==0){
        p /= 11;
        p*=100;
    } else { 
        j = p;
        while (p != 0){
            r *= 10;
            r += p%10;
            p = p/10;
        }
        if( j >= r)
            p = j;
        else
            p = r;
    }

    return p;
} 

int main(){
    int s0, s1, r0, r1, p1, p2;
    while(scanf("%d %d %d %d", &s0, &s1, &r0, &r1), (s0 || s1 || r0 || r1)){
        p1 = points(s0*10+s1);
        p2 = points(r0*10+r1);

        if (p1 > p2)
            printf("Player 1 wins.\n");
        else if (p1 < p2)
            printf("Player 2 wins.\n");
        else {
            printf("Tie.\n");
        }
    }
    return 0;

}