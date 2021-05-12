#include<bits/stdc++.h>
using namespace std;
#define int long long int
const  int MAXN = (int)(1e5+3);
vector<int> position[MAXN];	
void solve(){
	int n;
	cin>>n;
	
	vector<int> position(n);
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		position[num] = i+1;
	}
	int m;
	cin>>m;
	int sum1=0,sum2=0;
	for(int i=0;i<m;i++){
		int q;
		cin>>q;
		sum1+=position[q];
		sum2+=n-position[q]+1;
	}
	cout<<sum1<<" "<<sum2;
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// int t;
	// cin>>t;
	// while(t--)
		solve();
}