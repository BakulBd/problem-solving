#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin>>t;
    vector<ll> arr(t);
    for(ll i=0; i<t; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    ll q;
    cin>>q;
    while(q--){
        ll x; cin>>x;
        ll count = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
        cout << count << '\n';
    }
    return 0;
}