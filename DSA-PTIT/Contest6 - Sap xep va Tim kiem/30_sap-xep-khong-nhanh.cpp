#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n; cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for(long long i = 0; i < n; i++) cout << a[i] << " ";
}