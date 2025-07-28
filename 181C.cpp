#include<iostream>
typedef long long int ll;
using namespace std;

ll check ( ll num ) {
    ll cnt = 0;
    for ( ll i = 2; i < num; i++ ) {
        if ( i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 ) cnt++;
    }
    return cnt;
}

ll solve( ll x ) {

    ll ans = (x/210) * check( 210 ) + check( x % 210 );
    return ans;
}

int main () {
    int t; cin >> t;
    while ( t-- ) {
        ll l, r;
        cin >> l >> r;

        cout << solve( r+1 ) - solve( l ) << endl;
    }
    return 0;
}
