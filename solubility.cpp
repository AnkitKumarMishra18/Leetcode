#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long int x,a,b;
	cin>>x>>a>>b;
	cout<<(a+(100-x)*b)*10<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
		solve();
}