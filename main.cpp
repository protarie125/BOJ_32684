#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

double r, c, n, x, b, p;
double R, C, N, X, B, P;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> r >> c >> n >> x >> b >> p;
  const auto& cheok = r * 13 + c * 7 + n * 5 + x * 3 + b * 3 + p * 2;

  cin >> R >> C >> N >> X >> B >> P;
  const auto& ek = R * 13 + C * 7 + N * 5 + X * 3 + B * 3 + P * 2 + 1.5;

  if (cheok > ek) {
    cout << "cocjr0208";
  } else {
    cout << "ekwoo";
  }

  return 0;
}