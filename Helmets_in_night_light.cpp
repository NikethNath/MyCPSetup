#include <bits/stdc++.h>
using namespace std;    

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

#define pb push_back
const int inf = 1e9;

bool comp(pll a, pll b){
    if(a.first<b.first) return true;
    if(a.first==b.first && a.second>b.second) return true;
    return false;

}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,p;
        cin>>n>>p;
        vll array;
        for(int j=0 ; j<n ; j++){
            int input;
            cin>>input;
            array.pb(input);
        }
        vll barray;
        for(int j=0 ; j<n ; j++){
            int input;
            cin>>input;
            barray.pb(input);
        }
        vpll pairs;
        ll cost=p;
        int knows=1;
        pairs.pb({p,n-1});
        for(int j=0 ; j<n ; j++){
            pairs.pb({barray[j],array[j]});
        }
        sort(pairs.begin(),pairs.end(),comp);


            ll unknows=n-knows;
            for(pii p : pairs){
                if(p.second>=unknows){
                    cost+= unknows*p.first;
                    break;
                }
                else{
                    cost+=p.first*p.second;
                    unknows-=p.second;
                }

            }
            cout<<cost<<"\n";

            

        

        

        //completed taking input


        
    }

    
}