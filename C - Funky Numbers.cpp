#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    vector<int> t;
    unordered_set<int> tset;

    for (int k=1;;k++) {
        int p=k*(k + 1)/2;
        if (p>n) break;
        t.push_back(p);
        tset.insert(p);
    }

    bool f=false;
    for (int t:t) {
        if (tset.count(n-t)) {
            f=true;
            break;
        }
    }

    if (f) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}