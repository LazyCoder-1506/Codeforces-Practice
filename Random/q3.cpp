#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool f(vector<int> &arr, int i, int wt) {
  if (i == arr.size()) return false;
  if (arr[i] == wt) return true;
  if (arr[i] > wt) return false;
  return f(arr, i+1, wt) || f(arr, i+1, wt-arr[i]);
}

void solve() {
  int n, w;
  cin >> n >> w;
  vector<int> arr(n);
  for (int i = 0 ; i < n ; i++) cin >> arr[i];
  // dp[i][0] = weight 
  vector<vector<int>> dp(n, vector<int>(2));
  dp[0][0] = 0;
  dp[0][1] = arr[0];
  sort(arr.begin(), arr.end());

  if (f(arr, 0, w)) cout << "YES";
  else cout << "NO";
}

int main() {
  FastIO
  solve();
  return 0;
}