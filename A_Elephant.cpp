// // Author      : Ayush Thakur
// // Institute   : IIITDM Jabalpur

// #include <bits/stdc++.h>
// using namespace std;

// #define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define pii pair<int, int>
// #define all(x) x.begin(), x.end()
// #define yes cout << "Yes\n"
// #define no cout << "No\n"
// #define endl '\n'

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// // GCD and LCM
// ll gcd(ll a, ll b) {
//     while (b) {
//         a %= b;
//         swap(a, b);
//     }
//     return a;
// }

// ll lcm(ll a, ll b) {
//     return (a / gcd(a, b)) * b;
// }

// // Input vector
// template<typename T>
// void input_vector(vector<T> &v) {
//     for (auto &x : v) cin >> x;
// }

// // Print a vector
// void printVec(const vector<int>& v) {
//     for (auto val : v) cout << val << ' ';
//     cout << '\n';
// }
// void solve() {
//     int n;
//     cin >> n;
//     // vi a(n);
//     // input_vector(a);
//     int steps=0;
//     while (n>0){
//         if(n>=5){
//             steps+=(n/5);
//             n%=5;
//         }
//        else if(n>=4){
//             steps+=(n/4);
//             n%=4;
//         }
//         else if(n>=3){
//             steps+=(n/3);
//             n%=3;
//         }
//         else if(n>=2){
//             steps+=(n/2);
//             n%=2;
//         }
//         else{
//             steps+=n;
//             break;
//         }
//     }
//    cout<<steps<<endl;
    
//     //cout << "GCD of first two: " << gcd(a[0], a[1]) << endl;
// }

// int main() {
//     fast_io
//     int t = 1;
//     // cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double x;
    cin >> x;
    cout << ceil( x/5 ) << "\n"; // Equivalent to ceil(x/5)
    return 0;
}
