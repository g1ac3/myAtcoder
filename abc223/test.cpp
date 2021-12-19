#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = 1e9;

int main()
{
  int n, p, q;
  cin >> n >> p >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<int> Max1(n + 1), Max2(n + 1);
  Max1[n] = -1, Max2[n] = -2;
  for (int i = n; i > 0; i--)
  {
    int t = a[i - 1];
    if (t > Max1[i])
    {
      Max1[i - 1] = t;
      Max2[i - 1] = Max1[i];
    }
    else if (t > Max2[i])
    {
      Max1[i - 1] = Max1[i];
      Max2[i - 1] = t;
    }
    else
    {
      Max1[i - 1] = Max1[i];
      Max2[i - 1] = Max2[i];
    }
  }

  //条件を満たす順列Bで、先頭i文字が一致し、a[i]!=b[i]となるものがあるか
  int match = -1;
  bool used_p = false;
  for (int i = 0; i < n; i++)
  {
    if (used_p)
    {
      if (Max1[i] > a[i])
        match = i;
    }
    else
    {
      if ((Max1[i] > a[i] && Max1[i] != q) || Max2[i] > a[i])
        match = i;
    }
    if (a[i] == p)
      used_p = true;
    else if (a[i] == q && !used_p)
      break;
  }

  if (match == -1)
  {
    cout << -1 << endl;
    return 0;
  }

  vector<int> b = a;
  used_p = false;
  for (int i = 0; i < match; i++)
  {
    if (a[i] == p)
    {
      used_p = true;
      break;
    }
  }

  int m = INF, mi = -1;
  for (int i = match + 1; i < n; i++)
  {
    if (a[match] < a[i] && a[i] < m && (used_p || a[i] != q))
    {
      m = min(m, a[i]);
      mi = i;
    }
  }
  swap(b[match], b[mi]);
  sort(begin(b) + match + 1, end(b));

  if (!used_p && p > q && m != p)
  {
    int p_pos, q_pos;
    for (int i = match + 1; i < n; i++)
    {
      if (b[i] == p)
        p_pos = i;
      else if (b[i] == q)
        q_pos = i;
    }
    rotate(begin(b) + q_pos, begin(b) + q_pos + 1, begin(b) + p_pos + 1);
  }

  for (int i = 0; i < n; i++)
    cout << b[i] << (i == n - 1 ? "\n" : " ");
  return 0;
}
