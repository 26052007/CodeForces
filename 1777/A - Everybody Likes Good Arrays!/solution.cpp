#include <bits/stdc++.h>
using namespace std;
#define int long long
#define sonic cin.tie(NULL),ios_base::sync_with_stdio(false)
#define endl "
"
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend() 
// #define sz(v) (int)v.size()
#define pb push_back
#define pii pair<int, int>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
 
/*
    "Veer. Bhogya Vasundhara, Kayar bhoge dukh sada!"
    Author: Achyuta Singh Rajput
    54 54
*/
// ========================================================================================================
// =========================================== SPEED & MACROS =============================================
// ========================================================================================================
 
#define int long long
#define double long double
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define popc __builtin_popcountll
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define fore(i, a) for (auto &i : a)
#define nline "
"
#define YES cout << "YES" << nline
#define NO cout << "NO" << nline
 
// ========================================================================================================
// ======================================== TYPEDEFS & CONSTANTS ==========================================
// ========================================================================================================
 
 
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef vector<string> vs;
 
const int INF = 1e18;
const int MOD = 1e9 + 7; // Change to 998244353 if needed
const double PI = acos(-1.0);
const double EPS = 1e-9;
const int DX[] = {1, -1, 0, 0, 1, 1, -1, -1}; // 8 directions
const int DY[] = {0, 0, 1, -1, 1, -1, 1, -1};
 
// ========================================================================================================
// ============================================ DEBUGGING =================================================
// ========================================================================================================
 
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
void _print() { cerr << "]" << nline; }
template <typename T, typename... V>
void _print(T t, V... v) { __print(t); if (sizeof...(v)) cerr << ", "; _print(v...); }
 
void __print(int x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(string x) { cerr << "\"" << x << "\""; }
void __print(char x) { cerr << "\'" << x << "\'"; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
template <typename T, typename V> void __print(pair<T, V> p) { cerr << "{"; __print(p.ff); cerr << ", "; __print(p.ss); cerr << "}"; }
template <typename T> void __print(vector<T> v) { cerr << "[ "; for (T i : v) { __print(i); cerr << " "; } cerr << "]"; }
template <typename T> void __print(set<T> v) { cerr << "[ "; for (T i : v) { __print(i); cerr << " "; } cerr << "]"; }
template <typename T> void __print(map<T, T> v) { cerr << "[ "; for (auto i : v) { __print(i); cerr << " "; } cerr << "]"; }
 
// ========================================================================================================
// ======================================== MATHEMATICS ARSENAL ===========================================
// ========================================================================================================
 
namespace Math {
    // GCD & LCM
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
    int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
 
 
    // power
    int power(int base, int exponent) {
    // 1. Base Case: Any number to the power of 0 is 1
        if (exponent == 0) {
            return 1;
        }
        
        // 2. Handling Negative Exponents: x^-n = 1 / x^n
        else if (exponent < 0) {
            return 1 / power(base, -exponent);
        }
        
        // 3. Recursive Step: x^n = x * x^(n-1)
        else {
            return base * power(base, exponent - 1);
        }
    }
 
    // Modular Exponentiation (a^b % mod)
    int expo(int a, int b, int mod = MOD) {
        int res = 1; while (b > 0) {
            if (b & 1) res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;
        } return res;
    }
 
    // Modular Arithmetic
    int mod_add(int a, int b, int m = MOD) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
    int mod_sub(int a, int b, int m = MOD) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
    int mod_mul(int a, int b, int m = MOD) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
    int mod_inv(int n, int m = MOD) { return expo(n, m - 2, m); } // Only works if m is prime
 
    // Combinatorics (nCr)
    const int MAXN = 200005;
    int fact[MAXN], invFact[MAXN];
    void initFact() {
        fact[0] = 1; invFact[0] = 1;
        for (int i = 1; i < MAXN; i++) fact[i] = (fact[i - 1] * i) % MOD;
        invFact[MAXN - 1] = mod_inv(fact[MAXN - 1]);
        for (int i = MAXN - 2; i >= 1; i--) invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
    int nCr(int n, int r) {
        if (r < 0 || r > n) return 0;
        return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
    }
 
    // Sieve of Eratosthenes (Primes)
    vector<int> sieve(int n) {
        vector<bool> is_prime(n + 1, true); is_prime[0] = is_prime[1] = false;
        for (int p = 2; p * p <= n; p++) if (is_prime[p])
            for (int i = p * p; i <= n; i += p) is_prime[i] = false;
        vector<int> primes; for (int p = 2; p <= n; p++) if (is_prime[p]) primes.pb(p);
        return primes;
    }
 
    // Prime Factorization
    map<int, int> prime_factorize(int n) {
        map<int, int> factors;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) { factors[i]++; n /= i; }
        }
        if (n > 1) factors[n]++;
        return factors;
    }
 
    int ROBINKUMAR(int n) {
        map<int, int> factors;
        int ans = 1;
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) { factors[i]++;  n /= i; }
            if(factors[i] > 0) ans*=i;
        }
        if (n > 1) factors[n]++;
        ans *= n;
        return ans;
    }
}
using namespace Math;
 
// ========================================================================================================
// ======================================= DATA STRUCTURES ARSENAL ========================================
// ========================================================================================================
 
// 1. Disjoint Set Union (DSU)
struct DSU {
    vector<int> parent, size;
    DSU(int n) {
        parent.resize(n + 1); size.resize(n + 1, 1);
        iota(all(parent), 0);
    }
    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }
    void unite(int i, int j) {
        int root_i = find(i), root_j = find(j);
        if (root_i != root_j) {
            if (size[root_i] < size[root_j]) swap(root_i, root_j);
            parent[root_j] = root_i;
            size[root_i] += size[root_j];
        }
    }
    int getSize(int i) { return size[find(i)]; }
};
 
// 2. Fenwick Tree (Binary Indexed Tree) - Point Update, Range Query
struct Fenwick {
    int n; vector<int> tree;
    Fenwick(int n) : n(n), tree(n + 1, 0) {}
    void add(int i, int delta) { for (; i <= n; i += i & -i) tree[i] += delta; }
    int query(int i) { int sum = 0; for (; i > 0; i -= i & -i) sum += tree[i]; return sum; }
    int query(int l, int r) { return query(r) - query(l - 1); }
};
 
// 3. Segment Tree (Generic)
struct SegTree {
    int n; vector<int> tree;
    SegTree(int n) : n(n), tree(4 * n, 0) {}
    void update(int node, int start, int end, int idx, int val) {
        if (start == end) { tree[node] = val; return; }
        int mid = (start + end) / 2;
        if (idx <= mid) update(2 * node, start, mid, idx, val);
        else update(2 * node + 1, mid + 1, end, idx, val);
        tree[node] = tree[2 * node] + tree[2 * node + 1]; // Operation: Sum
    }
    int query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) return 0; // Identity Element
        if (l <= start && end <= r) return tree[node];
        int mid = (start + end) / 2;
        return query(2 * node, start, mid, l, r) + query(2 * node + 1, mid + 1, end, l, r);
    }
};
 
// ========================================================================================================
// ======================================== GRAPH & TREE ARSENAL ==========================================
// ========================================================================================================
 
namespace Graph {
    // BFS
    vi bfs(int start, int n, const vvi &adj) {
        vi dist(n + 1, -1); queue<int> q;
        dist[start] = 0; q.push(start);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u]) {
                if (dist[v] == -1) { dist[v] = dist[u] + 1; q.push(v); }
            }
        } return dist;
    }
 
    // Dijkstra (Shortest Path)
    vi dijkstra(int start, int nodes, const vector<vector<pii>> &adj) {
        vi dist(nodes + 1, INF);
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        dist[start] = 0; pq.push({0, start});
        while (!pq.empty()) {
            int d = pq.top().first, u = pq.top().second; pq.pop();
            if (d > dist[u]) continue;
            for (auto &edge : adj[u]) {
                int v = edge.first, w = edge.second;
                if (dist[u] + w < dist[v]) { dist[v] = dist[u] + w; pq.push({dist[v], v}); }
            }
        } return dist;
    }
 
    // Topological Sort
    vi topoSort(int n, const vvi &adj) {
        vi in_degree(n + 1, 0);
        for (int u = 1; u <= n; ++u) for (int v : adj[u]) in_degree[v]++;
        queue<int> q; for (int i = 1; i <= n; ++i) if (in_degree[i] == 0) q.push(i);
        vi topo;
        while (!q.empty()) {
            int u = q.front(); q.pop(); topo.pb(u);
            for (int v : adj[u]) if (--in_degree[v] == 0) q.push(v);
        } return sz(topo) == n ? topo : vi{};
    }
}
using namespace Graph;
 
namespace Tree {
    // LCA (Lowest Common Ancestor) with Binary Lifting
    const int MAX_LOG = 20;
    vvi up; vi depth;
    void initLCA(int n, const vvi &adj, int root = 1) {
        up.assign(n + 1, vi(MAX_LOG)); depth.assign(n + 1, 0);
        function<void(int, int, int)> dfs = [&](int u, int p, int d) {
            depth[u] = d; up[u][0] = p;
            for (int i = 1; i < MAX_LOG; i++) up[u][i] = up[up[u][i - 1]][i - 1];
            for (int v : adj[u]) if (v != p) dfs(v, u, d + 1);
        };
        dfs(root, root, 0);
    }
    int getLCA(int u, int v) {
        if (depth[u] < depth[v]) swap(u, v);
        for (int i = MAX_LOG - 1; i >= 0; i--) if (depth[u] - (1 << i) >= depth[v]) u = up[u][i];
        if (u == v) return u;
        for (int i = MAX_LOG - 1; i >= 0; i--) if (up[u][i] != up[v][i]) { u = up[u][i]; v = up[v][i]; }
        return up[u][0];
    }
    int dist(int u, int v) { return depth[u] + depth[v] - 2 * depth[getLCA(u, v)]; }
}
using namespace Tree;
 
// ========================================================================================================
// ========================================= SEARCH & UTILS ===============================================
// ========================================================================================================
 
namespace Utils {
    // Binary Search: First True (First index where check(i) is true)
    int first_true(int l, int r, function<bool(int)> f) {
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (f(mid)) { ans = mid; r = mid - 1; }
            else l = mid + 1;
        } return ans;
    }
    // Binary Search: Last True
    int last_true(int l, int r, function<bool(int)> f) {
        int ans = -1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (f(mid)) { ans = mid; l = mid + 1; }
            else r = mid - 1;
        } return ans;
    }
    // Coordinate Compression
    void compress(vi &a) {
        vi b = a; sort(all(b)); b.erase(unique(all(b)), b.end());
        for (int &x : a) x = lower_bound(all(b), x) - b.begin();
    }
}
using namespace Utils;
 
// ========================================================================================================
// ============================================ SOLVE =====================================================
// ========================================================================================================
 
void solve(){
    
    int n;
    cin>>n;
    vector<int>  v;
    for(int i = 0 ; i < n; i++){
        int c;
        cin>>c;
        v.pb(c);
    }
 
    if(n==1){
        cout << 0 << endl;
    }
    else{
        int ans = 0;
        int c = 0;
        for(int i = 0; i < n-1; i++){
            
            if(v[i]%2 == v[i+1]%2){
                c++;
            }
            else{
                ans+=c;
                c= 0;
            }
        }
        ans += c;
 
        cout << ans << endl;
    }
    
 
    
    
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // initFact(); // UNCOMMENT if using nCr
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}