#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int l=0,f=INT_MAX;
    int cnt[4]={};
    for(int i=0;i<s.size();i++){
        cnt[s[i]-'0']++;
        while(cnt[1] && cnt[2] && cnt[3]){
        f=min(f,i-l+1);
        cnt[s[l++]-'0']--;
    }
    }
    
    cout<<(f==INT_MAX?0:f)<<endl;
    }
    return 0;
}