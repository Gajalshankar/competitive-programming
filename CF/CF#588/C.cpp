// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~ Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutoshrathi~~~~~~~~~~~
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Use memcpy while copying matrix :D
// o_O Never do calculation in if block -_- 
// Use __builtin_popcount(z) to get set bit count of z
// Don't use endl use '\n'

#include <bits/stdc++.h> 	// Apne aap me sab kuch hai isme 
#include <stdio.h>

using namespace std;	// Kyuki yahi mai-baap hai

#define fi(a) for (ll i = 0; i < a; ++i)
#define fj(a) for (ll j = 0; j < a; ++j)
#define tezzzzz fin; fout; fio;
#define pb push_back
#define fin cin.tie(NULL)
#define fout cout.tie(NULL)
#define fio ios::sync_with_stdio(false)
typedef pair <long, long> lpairs;
typedef long long ll;
#define endl "\n"

const ll MOD = 1e9+7;

ll power(ll x, ll y, ll p) { 
    ll res = 1;
    x = x % p;
  
    while (y > 0) { 
        if (y & 1) 
            res = (res*x) % p; 
  
        y = y>>1;
        x = (x*x) % p; 
    } 
    return res; 
}
  
ll modInverse(ll n, ll p) { 
    return power(n, p-2, p); 
}

tuple<ll, ll, ll> extended_gcd(ll a, ll b) {
	if (a == 0)
		return make_tuple(b, 0, 1);

	ll gcd, x, y;
	tie(gcd, x, y) = extended_gcd(b % a, a);

	return make_tuple(gcd, (y - (b/a) * x), x);
}

ll gcd(ll a, ll b) {
    if(a%b == 0) {
        return b;
    }
    return gcd(b, a%b);
}

vector<int> primes;

void SieveOfEratosthenes(int n) {
    primes.clear();
    bool prime[n+1];
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) {
        if (prime[p] == true) { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    for (int p=2; p<=n; p++) {
       if (prime[p]) {
           primes.push_back(p);
       }
    } 
}

int main() {
    tezzzzz
    ll n, m;
    cin >> n >> m;
    if(m == 0) {
        cout << 0 << endl;
        return 0;
    }
    int a, b;
    vector<int> c(7, 0);
    
    fi(m) {
        cin >> a >> b;
        c[a]++; c[b]++;
    }
    int j = 0;

    if(n<=6) {
        cout << m << endl;
    }
    if(n == 7) {
        fi(7) {
            if(c[i] == 6) {
                j+=5;
            }
        }
        if(m < 11) {
            cout << m << endl;
        } else {
            cout << m-j << endl;
        }
    }
    return 0;
}
