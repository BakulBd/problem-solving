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
    vector<ll> a(n);
    ll mn=LLONG_MAX;

    for (int i =0;i<n;i++) {
        cin>>a[i];
        mn=min(mn,a[i]);
    }

    for (int i=0;i<n;i++) 
        a[i]-=mn;

    ll m = 0, c = 0;
    for (int i = 0; i < 2 * n; ++i) {
        if (a[i%n]>0) {
            ++c;
            m=max(m,c);
        }else{
            c=0;
        }
    }
    ll r=mn*n+m;
    cout << r << endl;
    return 0;
}
