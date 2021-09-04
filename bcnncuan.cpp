#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll LCM(ll a, ll b) {
    return (a*b)/std::__gcd(a,b);
}

int main () {
    int t;
    
	cin>>t;
    while (t--) {
        ll n;
    	cin>>n;
    	ll temp=1;
    	for (int i=1;i<=n;i++) {
    		temp=LCM(temp,i);
		}
		cout<<temp<<endl;
	}
    return 0;
}