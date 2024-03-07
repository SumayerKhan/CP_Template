/*******************************************************************
*  Author : Sumayer Khan Sajid                                     *
*  University : North South University                             *
*  Department : Computer Science and Engineering (CSE)             *
*  Facebook : https://fb.com/sajid002                              *
*******************************************************************/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PI acos(-1)
#define endl '\n'
#define pb(x) push_back(x)
#define mini_pos(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi_pos(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define all(x)         (x).begin(),(x).end()
#define gcd(a,b) __gcd(a,b)
#define precision(n) fixed<<setprecision(n)

const ll MAX = 1e8;

vector<bool> prime(MAX, true);
void is_prime(ll n){
	prime[0] = prime[1] = false;

	for(ll i = 2; i * i <= n; i++){
		if(prime[i]){
			for(ll j = i*i; j <= n; j += i){
				if(prime[j] == false){
					continue;
				}
				else{
					prime[j] = false;
				}
			}
		}
	}
}

// bool is_prime(ll n){
// 	if(n == 1){
// 		return false;
// 	}

// 	for(ll i = 2; i*i <= n; i++){
// 		if(n%i == 0){
// 			return false;
// 		}
// 	}
// 	return true;
// }

ll SOD(ll n){
	ll sum = 0;
	for(ll i = 1; i * i <= n; i++){
		if(n%i == 0){
			sum += i;
			if(n/i != i){
				sum += (n/i);
			}
		}
	}
	return sum;
}

vector<ll> div_finder(ll n){
	vector<ll> divisors;
	for(ll i = 1; i*i <= n; i++){
		if(n%i == 0){
			divisors.pb(i);
			if(n/i != i){
				divisors.pb(n/i);
			}
		}
	}
	sort(all(divisors));
	return divisors;
}

vector<ll> prime_factorization(ll n){
	vector<ll> prime_factors;
	
	ll c = 2;

	while(n > 1){
		if(n%c == 0){
			prime_factors.pb(c);
			n /= c;
		}
		else{
			c++;
		}
	}
	return prime_factors;
}

int main(){
    optimize();

    return 0;
}
