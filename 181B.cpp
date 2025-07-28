#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        ll a, b, k;
        if ( a <= k && b <= k ) cout << 1 << endl;
        else {

            ll gcd = __gcd( a, b );
            cout << ( a/gcd <= k && b/gcd <= k ? 1 : 2 ) << endl;
        }
    }
    return 0;
}
