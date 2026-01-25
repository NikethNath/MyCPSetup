#include <bits/stdc++.h>
using namespace std;    

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using pqi=priority_queue<int>;
using pqpii=priority_queue<pii>;

#define pb push_back
#define all(x) (x).begin(),(x).end()
const int inf = 1e9;
const ll INF=1e18;

bool comp(pii a, pii b ){
    if(a.second<b.second) return true;
    return false;
}
int bs(vi &a,int target){
    auto it=upper_bound(a.begin(),a.end(),target);   //first element> target
    //auto it=lower_bound(a.begin(),a.end(),target);    //first element>= target
    int index=distance(a.begin(),it);
    return index;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        
    }

    
}