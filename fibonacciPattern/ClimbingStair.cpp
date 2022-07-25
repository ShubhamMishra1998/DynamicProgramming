#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fibTopDown(ll n,vector<ll> &dp){
	if(n<=1)
		return 1;
	if(dp[n]!=-1)
	return dp[n];
	else
	return dp[n]=fibTopDown(n-1,dp)+fibTopDown(n-2,dp);	
}

ll fibBottomUp(ll n,vector<ll> &dp){
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> dp(n+1,-1);
		ll ans1=fibTopDown(n,dp);
		ll ans2=fibBottomUp(n,dp);
		cout<<"topdown "<<ans1<<" bottomup "<<ans2<<'\n';
	}
}