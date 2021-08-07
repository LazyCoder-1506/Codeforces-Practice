#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
  string s;
  cin >> s;
  bool ab = false;
  bool ba = false;
  vector<int> abs;
  vector<int> bas;
  for (int i = 0 ; i < s.length() - 1; i++) {
    if (s[i] == 'A' && s[i + 1] == 'B') {
      ab = true;
      abs.push_back(i);
    }
    if (s[i] == 'B' && s[i + 1] == 'A') {
      ba = true;
      bas.push_back(i);
    }
  }
  if (ab && ba) {
    if ((abs[abs.size() - 1] - bas[0] > 1) || (bas[bas.size() - 1] - abs[0] > 1)) cout << "YES\n";
    else cout << "NO\n";
  }
  else cout << "NO\n";
}

signed main() {
  solve();
  return 0;
}