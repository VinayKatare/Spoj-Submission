//https://www.spoj.com/problems/DIVSUM/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define all(a)                      a.begin(), a.end()
#define pb                          push_back
#define ll							long long
#define index(a)            		order_of_key(a)
#define value(a)					find_by_order(a)
#define count_1 					__builtin_popcount
#define mod(x, m)					((((x) % (m)) + (m)) % (m))
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
ll prime[500010];
void pr(){
	for(int i=1;i<=500000;i++){
		prime[i]+=i;
		for(int j=2*i;j<=500000;j+=i){
			prime[j]+=i;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout<<setprecision(12);
	pr();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<prime[n]-n<<"\n";
	}
	return 0;
}
