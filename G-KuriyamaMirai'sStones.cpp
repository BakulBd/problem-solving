#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int c;
    cin>>c;
    vector<ll>arr(c);
    for(int i=0;i<c;i++) cin>>arr[i];
    ll pr1[c];
    pr1[0]=arr[0];
    for(int i=1;i<c;i++){
        pr1[i]=arr[i]+pr1[i-1];
        //cout<<pr1[i]<<endl;
    }
    sort(arr.begin(),arr.end());
    ll pr2[c];
    pr2[0]=arr[0];
    for(int i=1;i<c;i++){
        pr2[i]=arr[i]+pr2[i-1];
        //cout<<pr1[i]<<endl;
    }

    int q;
    cin>>q;
    while(q--){
      int a,b,c;
      cin>>a>>b>>c;
     b--,c--;
      if(a==1){
    if(b==0) cout<<pr1[c]<<endl;
    else{
        ll r=pr1[c]-pr1[b-1];
        cout<<r<<endl;
    }
      }else{
    if(b==0) {
        cout<<pr2[c]<<endl;
    }
    else{
        ll r=pr2[c]-pr2[b-1];
        cout<<r<<endl;
    }
      }
    }



return 0;
}
