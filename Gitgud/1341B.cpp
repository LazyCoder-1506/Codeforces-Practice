#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0 ; i < n ; i++) cin >> arr[i];

  vector<int> ispeak(n, 0);
  for (int i = 1 ; i < n - 1 ; i++) {
    if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) ispeak[i] = 1;
  }

  vector<int> peaks(n);
  peaks[0] = 0;
  for (int i = 1 ; i < n ; i++) {
    peaks[i] = peaks[i-1] + ispeak[i];
  }

  int ansleft = 0;
  int anspeak = 0;
  for (int i = k-1 ; i < n ; i++) {
    int pp = peaks[i-1] - peaks[i-k+1];
    if (pp > anspeak) {
      anspeak = pp;
      ansleft = i-k+1;
    }
  }
  cout << (anspeak + 1) << " " << (ansleft+1) << "\n";
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