#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  int t,p=0;
  cin>>t;
  while(t--){
    p++;
  int n,m,i,j,k,l=0;
  cin>>n>>k;
  int a[n];
  vector<int> v(101);
  for(i=0;i<=100;i++) v[i]=0;
  for(i=0;i<n;i++){
    cin>>a[i];
    v[a[i]]++;
  }
  for(i=1;i<101;i++) if(v[i]>2){l=1; break;}
  if(n>2*k||l==1) cout<<"Case #"<<p<<": NO"<<endl;
  else cout<<"Case #"<<p<<": YES"<<endl;
  }
    
}