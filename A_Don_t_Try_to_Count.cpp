// Author      : Ayush Thakur
// Institute   : IIITDM Jabalpur

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define all(x) x.begin(), x.end()
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define endl '\n'

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

// GCD and LCM
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// Input vector
template<typename T>
void input_vector(vector<T> &v) {
    for (auto &x : v) cin >> x;
}

// Print a vector
void printVec(const vector<int>& v) {
    for (auto val : v) cout << val << ' ';
    cout << '\n';
}
// Debug Print Helpers
void _print(int x) { cerr << x; }
void _print(long x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(unsigned x) { cerr << x; }
void _print(unsigned long x) { cerr << x; }
void _print(unsigned long long x) { cerr << x; }
void _print(float x) { cerr << x; }
void _print(double x) { cerr << x; }
void _print(long double x) { cerr << x; }
void _print(char x) { cerr << '\'' << x << '\''; }
void _print(const char* x) { cerr << '"' << x << '"'; }
void _print(const string& x) { cerr << '"' << x << '"'; }
void _print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V> void _print(const pair<T, V>& x) {
    cerr << '{'; _print(x.first); cerr << ", "; _print(x.second); cerr << '}';
}
template <typename T> void _print(const vector<T>& v) {
    cerr << '[';
    for (size_t i = 0; i < v.size(); ++i) { _print(v[i]); if (i != v.size() - 1) cerr << ", "; }
    cerr << ']';
}
template <typename T> void _print(const set<T>& v) {
    cerr << '{'; for (auto i : v) { _print(i); cerr << ", "; } cerr << '}';
}
template <typename T, typename V> void _print(const map<T, V>& v) {
    cerr << '{'; for (auto i : v) { _print(i); cerr << ", "; } cerr << '}';
}


bool check(string A,string B){
    string sbs;
if(A.length()<B.length()){
    return false;
}

else {
    int co=0;
    for (int i = 0; i < A.length(); i++) {
      sbs=A.substr(i,B.length());
    //   cout<<sbs<<endl;
       if(sbs==B){
        co++;
       }
       else{
        continue;
       }
    }
    if(co>0){
        return true;
    }
    else{
       return false;
    }
}
}


void solve() {
    int n,m;
    cin >> n>>m;
    string a;
    string b;
    cin>>a>>b;
    string str1 =a+a;
    string str2 =str1+str1;
    string str3 =str2+str2;
    string str4 =str3+str3;
    string str5 =str4+str4;

    int res=-1;
    if(check(a,b)){
        res=0;
    }
    else if(check(str1,b)){
        res=1;
    }
    else if(check(str2,b)){
        res=2;
    }
    else if(check(str3,b)){
        res=3;
    }
    else if(check(str4,b)){
        res=4;
    }
    else if(check(str5,b)){
        res=5;
    }
    else{
        res=-1;
    }

    cout<<res<<endl;
}

int main() {
    fast_io
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}