#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void back(int a, vector<int>&arr, vector<bool>&visit){
    if(arr[a]==0){
        return;
    }
    visit[arr[a]]=true;
    back(arr[a], arr, visit);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin>>q;
    while(q--){
        vector<bool>visit(4,false);
        vector<int>arr(4);
        int a;
        cin>>a;
        visit[a]=true;
        for(int i=1;i<4; i++){
            cin>>arr[i];
        }
        back(a,arr, visit);
        if(visit[1] && visit[2] && visit[3]){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
