#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void helper(vector<ll> &arr, ll k, ll low, ll high, ll curr) {
    ll n = high - low - 1;

    if (low == high) {
        arr[low] = curr;
        return;
    }

    if (n < 60 && k <= (1LL << n)) {
        arr[low] = curr;
        helper(arr, k, low + 1, high, curr + 1);
    } else if (n < 60) {
        arr[high] = curr;
        helper(arr, k - (1LL << n), low, high - 1, curr + 1);
    } else {
        // Handle invalid cases for large `n`
        arr[high] = curr;
        helper(arr, k, low, high - 1, curr + 1);
    }
}

void solver() {
    ll n, k;
    cin >> n >> k;

    // Validate `k` against the maximum number of permutations
    if (n - 1 < 60 && k > (1LL << (n - 1))) {
        cout << "-1\n";
        return;
    }

    vector<ll> arr(n);
    helper(arr, k, 0, n - 1, 1);

    for (auto it : arr)
        cout << it << " ";
    cout << '\n';
}

int main() {
    int testno;
    cin >> testno;

    while (testno--)
        solver();

    return 0;
}
