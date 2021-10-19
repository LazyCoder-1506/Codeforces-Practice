#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int> levels(105);

int maxIndex(vector<int> &arr, int left, int right) {
  int mx = 0;
  int ans = -1;
  for (int i = left ; i <= right ; i++) {
    if (arr[i] > mx) {
      mx = arr[i];
      ans = i;
    }
  }
  return ans;
}

void f(vector<int> &arr, int left, int right, int level) {
  if (left > right) return;
  int idx = maxIndex(arr, left, right);
  levels[arr[idx]] = level;
  f(arr, left, idx - 1, level+1);
  f(arr, idx+1, right, level+1);
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0 ; i < n ; i++) cin >> arr[i];
  f(arr, 0, n-1, 0);
  for (int i = 0 ; i < n ; i++) cout << levels[arr[i]] << " ";
  cout << "\n";
}

int main() {
  FastIO
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}