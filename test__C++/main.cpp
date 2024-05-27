#include "ArrayUtility2.h"

int main() {
	int x[5], y[5];
	cout << "정수 5개를 입력하라.";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수 5개를 입력하라.";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	int n = 0;
	ArrayUtility2::concat(x, y, 10);
	ArrayUtility2::remove(x, y, 5, n);
}