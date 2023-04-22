// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/HOWMANY
// Language: cpp / go / c / python
// Date: 2022-12-08
// Difficulty Rating: 908

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define pi 3.141592653589793238462
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define ixy int x, y; cin >> x >> y
#define ixyz int x, y, z; cin >> x >> y >> z
#define iab int a, b; cin >> a >> b
#define iabc int a, b, c; cin >> a >> b >> c
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()

int read(){static int x; cin >> x; return x;}
ll readll(){static ll x; cin >> x; return x;}
double readd(){static double x; cin >> x; return x;}
ld readld(){static ld x; cin >> x; return x;}
string reads(){static string x; cin >> x; return x;}
char readc(){static char x; cin >> x; return x;}
#define mms ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.precision(2)

int main() {
    mms;
    string str;
    cin >> str;

    if(str.length() == 1) cout << 1 << endl;
    else if(str.length() == 2) cout << 2 << endl;
    else if(str.length() == 3) cout << 3 << endl;
    else cout << "More than 3 digits" << endl;
    return 0;
}