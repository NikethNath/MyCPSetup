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

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vi a;
        for(int j=0 ; j<n ; j++){
            int input;
            cin>>input;
            a.pb(input);

        }
        vi b;
        // if(k!=4){
            int op=inf;
            for(int j=0 ; j<n ; j++){
                if((k-(a[j]%k))%k < op) op=(k-(a[j]%k))%k;
                
            }
            cout<<op<<"\n";
            continue;
            

        // }
        int evencount=0;
        for(int j=0 ; j<n ; j++){
            if(a[j]%2==0) evencount++;
        }
        if(evencount==2){
            cout<<"0\n";
            continue;
        }
        
        if(evencount==1 && n>=2){
            cout<<"1\n";
            continue;
            
        } 
        if (evencount==0 && n>=2){
            cout<<"2\n";
            continue;
        }
        else cout<<k-(a[0]%k)<<"\n";


        
    }

    
}