//                               Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
vector<int> prefix(string s) {
    vector<int> p(s.size());
    int j = 0;
    for (int i = 1; i <s.size(); i++) {
        while (j > 0 && s[j] != s[i])
            j = p[j-1];
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }
    return p;
}
int kmp(string a, string b){
    vector<int>v=prefix(b);
    int n=a.size(), m=b.size(), i=0, j=0, c=0;
    while(i<n){
        if(a[i]==b[j])
            i++, j++;
        if(j==m){
            c++;
            j=v[j-1];
        }
        else if(i<n&&b[j]!=a[i]){
            if(j)
                j=v[j-1];
            else
                i++;
        }
    }
    return c;
}
int main() {
    string a, b;
    cin>>a>>b;
    cout<<kmp(a, b);
}
