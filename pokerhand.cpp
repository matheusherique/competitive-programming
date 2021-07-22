#include <bits/stdc++.h>

using namespace std;

int main(){
    char a[2];
    int ans, n=5;
    map<char, int> rank;
    while(n--){
        scanf("%s",a);
        rank[a[0]]++;
        ans=max(ans, rank[a[0]]);
    }
    printf("%d\n", ans);
}