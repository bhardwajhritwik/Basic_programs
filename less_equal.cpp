#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define int ll
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 1e5 + 10; 

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n,k;
   cin >> n >> k;
   vector<int> a(n);
   map<int,int> cnt;
   f(i,0,n){
      cin >> a[i];
      cnt[a[i]]++;
   }
   sort(all(a));
   if(k==0){
      if(a[0] == 1){
         cout << "-1\n";
      }else{
         cout << "1\n";
      }
      return 0;
   }
   if(k==n){
      cout << MOD-7 << '\n';
      return 0;
   }
   if(a[k-1] == a[k]){
      cout << "-1\n";
   }else{
      cout << a[k-1] << '\n';
   }
   return 0;
}
