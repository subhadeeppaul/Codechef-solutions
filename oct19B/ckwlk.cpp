#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define mod 1000000007
#define mp make_pair
 
int scan(){
	register int c = getchar_unlocked();
	register int n = 0;
	register int neg=0;
	for( ; ((c<48 || c>57)&&c!='-'); c = getchar_unlocked() );
	if(c=='-') {
		neg=1; c=getchar_unlocked();
	}
	for( ; (c>47 && c<58); c = getchar_unlocked() ){
		n = (n<<1) + (n<<3) +c -48;
	}
	if(neg) return -n;
	else return n;
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll count=0;
		ll x = n;
		while((x%10)==0){
			x/=10;
			count++;
		}
		//cout<<count<<endl;
		if(x==1){
			cout<<"Yes"<<endl;
		}
		else{
			ll val = 0;
			while((x%2)==0){
				x/=2;
				val++;
			}
			if(x!=1){
				cout<<"No"<<endl;
			}
			else if(val <= count){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
		}
	}
	return 0;
}
