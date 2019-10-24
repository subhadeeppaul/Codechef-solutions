#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}

#define ll long long
#define pb push_back
#define ld long double
#define mp make_pair
#define F first
#define S second
#define pii pair<ll,ll>

using namespace :: std;


//=======================================================================//
#include <iostream>
#include <algorithm>
#include <string>
#include <assert.h>
long long readInt(long long l,long long r,char endd){
	long long x=0;
	int cnt=0;
	int fi=-1;
	bool is_neg=false;
	while(true){
	    char g=getchar();
	    if(g=='-'){
	        assert(fi==-1);
	        is_neg=true;
	        continue;
	    }
	    if('0'<=g && g<='9'){
	        x*=10;
	        x+=g-'0';
	        if(cnt==0){
	            fi=g-'0';
	        }
	        cnt++;
	        assert(fi!=0 || cnt==1);
	        assert(fi!=0 || is_neg==false);

	        assert(!(cnt>19 || ( cnt==19 && fi>1) ));
	    } else if(g==endd){
	        assert(cnt>0);
	        if(is_neg){
	            x= -x;
	        }
	        assert(l<=x && x<=r);
	        return x;
	    } else {
	        assert(false);
	    }
	}
}
string readString(int l,int r,char endd){
	string ret="";
	int cnt=0;
	while(true){
	    char g=getchar();
	    assert(g!=-1);
	    if(g==endd){
	        break;
	    }
	    cnt++;
	    ret+=g;
	}
	assert(l<=cnt && cnt<=r);
	return ret;
}
long long readIntSp(long long l,long long r){
	return readInt(l,r,' ');
}
long long readIntLn(long long l,long long r){
	return readInt(l,r,'\n');
}
string readStringLn(int l,int r){
	return readString(l,r,'\n');
}
string readStringSp(int l,int r){
	return readString(l,r,' ');
}
//=======================================================================//



const ll maxn=1e5+500;
const ll inf=1e9+800;
const ll mod=1e9+7;

ll solve(ll l,ll r,ll k){
	if(k==1)return r;
	ll ans=0;
	for(ll i=0;i<62;i++){
		if(!(((l>>i)&1)==0 && ((r>>i)&1)==0 && (r-l)<(1LL<<i))){
			ans+=(1LL<<i);
		}
	}
	return ans;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll t;
	t=readIntLn(1,(ll)1e5);
	for(ll i=0;i<t;i++){
		ll l,r;
		l=readIntSp(0,(ll)1e18);
		r=readIntLn(l,(ll)1e18);
		cout<<solve(l,r,2)<<endl;
	}
}