#include "ArrayUtility2.h"

int main() {
	int x[5], y[5];
	cout << "���� 5���� �Է��϶�.";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "���� 5���� �Է��϶�.";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	int n = 0;
	ArrayUtility2::concat(x, y, 10);
	ArrayUtility2::remove(x, y, 5, n);
}