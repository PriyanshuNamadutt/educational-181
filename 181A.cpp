#include<iostream>
#include<string>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        string s; cin >> s;
        string st = "", rem = "";
        for ( int i = 0; i < s.size(); i++ ) {
            if ( s[i] == 'T' ) st += 'T';
            else rem += s[i];
        }
        string ans = st + rem;
        cout << ans << endl;
    }
    return 0;
}
