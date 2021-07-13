#include <bits/stdc++.h>

using namespace std;

string sum(string s){
    int sum=0;

    for(int i=0; i<s.size(); i++){
        sum+=tolower(s[i])-'a'+1;
    }

    return to_string(sum);
}

int c(string s){
    int sum=0;

    for(int i = 0; i<s.size();i++)
        sum+=s[i]-'0';

    if(sum>9)
        sum=c(to_string(sum));

    return sum;

}

int main(){
    string s1, s2;
    double n,m;

    while(getline(cin, s1) && getline(cin, s2)){
        n=(double)c(sum(s2));
        m=(double)c(sum(s1));
        printf("%.2lf %%\n", n>m?m*100.0/n:n*100.0/m);
    } 
    return 0;
}