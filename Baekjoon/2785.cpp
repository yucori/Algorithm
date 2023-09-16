#include <iostream>
#include <algorithm>
using namespace std;

int n, s, a[500000];

int main() {
	cin>>n;
	for (int i = 0; i < n; i++) cin>>a[i];

	sort(a, a + n);

	for (int i = 0; i < n; i++) {
		int cnt = n - i - 1;
		s += a[i];
		if (s >= cnt) {
			cout<<cnt;
			break;
		}
	}

	return 0;
}