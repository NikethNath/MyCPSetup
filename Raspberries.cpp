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
        vector<int> array;
        for(int j=0 ; j<n ;j++){
            int input;
            cin>>input;
            array.pb(input);

        }
        int ans=inf;
        if(k!=4){
            for(int j=0 ; j<n ;j++){
                int temp=(k-(array[j]%k))%k;
                if(temp<ans) ans=temp;
            }
            cout<<ans<<"\n";
        }
        else{
            int evencount=0;
            int candidate=inf;
            for(int j=0 ; j<n ; j++){
                if(array[j]%2==0) evencount++;
                int temp=(k-(array[j]%k))%k;
                if(temp<ans) ans=temp;

                

            }
            if(evencount>=2) candidate=0;
            if(evencount==1) candidate=1;
            if(evencount==0) candidate=2;
            cout<<min(candidate,ans)<<"\n";
        }
        
    }

    
}