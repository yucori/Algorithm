#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
string a[20005];

bool compare(string a, string b) {
	if (a.length() < b.length()) {
		return 1;
	}
	else if (b.length() < a.length()) {
		return 0;
	}
	else {
		return a < b;
	}
}

int main() {
	cin >> n;
    for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, compare);

	for (int i = 0; i < n; i++) {
		if (i > 0 && a[i] == a[i - 1]) continue; //같으면 넘김
		cout << a[i] << ' ';
	}

}