#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int func(int s,int e,vector<ll> v,int n)
{
  if(s>=e)
   return 0;
   
   int take=-1e9;
   if(s>=0&&s<=n-1)
     take=v[s]+func(s+1,e,v,n);
   int ntake=-1e9;
    if(e>=0&&e<=n-1)
     ntake=v[e]+func(s,e-1,v,n);

    return max(take,ntake);
}
int main() {
	
	int n;
	cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
     cin>>v[i];
    
   return func(0,n-1,v,n); 
}