#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isGood(int a, int x) {
  if (a <= x) return true;
  else return false;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0 ; i < n ; i++) cin >> arr[i];
  for (int i = 0 ; i < k ; i++) {
    int x;
    cin >> x;
    int l = 0, r = n - 1, ans = 0;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (isGood(arr[mid], x)) {
        ans = mid + 1;
        l = mid + 1;
      }
      else r = mid - 1;
    }
    cout << ans << "\n";
  }
}

int main() {
  FastIO
  solve();
  return 0;
}