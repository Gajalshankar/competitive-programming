// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// ~~~~~~~ Aashutosh Rathi~~~~~~
// ~~~~~~~~aashutoshrathi~~~~~~~~~~~
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// https://codeforces.com/problemset/problem/466/C
 
// Use memcpy while copying matrix :D
// o_O Never do calculation in if block -_- 
 
#include <bits/stdc++.h> 	// Apne aap me sab kuch hai isme 
#include <stdio.h>

using namespace std;	// Kyuki yahi mai-baap hai

 
#define mod(x) 			x%1000000007;
#define MIN(n1, n2)     ((n1) > (n2) ? (n2) : (n1))
#define MAX(n1, n2)     ((n1) > (n2) ? (n1) : (n2))
#define MID(s, e)       (s+(e-s)/2)
#define fast fin; fout; fio;
#define fin cin.tie(NULL)
#define fout cout.tie(NULL)
#define fio ios::sync_with_stdio(false)
typedef pair <long, long> lpairs;
typedef long long ll;



int main() {
    fast
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    ll res = 0;
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if(n < 3 || sum%3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> count(n);
    ll reqSum = sum/3;
    ll mehnatiSum = 0;

    for(ll i=n-1; i>=0; i--) {
        mehnatiSum += a[i];
        if(mehnatiSum == reqSum) {
            count[i] = 1;
        }
    }

    for(ll i=n-2; i>=0; i--) {
        count[i] += count[i+1];
    }

    mehnatiSum = 0;
    for(ll i=0; i < n-2; i++) {
        mehnatiSum += a[i];
        if(mehnatiSum == reqSum)
            res += count[i+2];
    }

    
    cout << res << endl;    
    return 0;
}

