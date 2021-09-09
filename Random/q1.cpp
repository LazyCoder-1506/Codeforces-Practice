#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int binarySearch(vector<int> &arr, int l, int r, int key) {
  while (l <= r) {
    int mid = l + (r - l) / 2;
    // cout << mid << "\n";
    if (arr[mid] == key) return 1;
    else if (arr[mid] > key) r = mid - 1;
    else l = mid + 1;
  }
  return 0;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0 ; i < n ; i++) cin >> arr[i];
  for (int i = 0 ; i < k; i++) {
    int x;
    cin >> x;
    if (binarySearch(arr, 0, n-1, x)) cout << "YES\n";
    else cout << "NO\n";
  }
}

int main() {
  FastIO
  solve();
  return 0;
}