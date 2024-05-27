#include "ArrayUtility2.h"

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	cout << "합친 정수 배열을 출력한다." << endl;
	int* n = new int[size];
	for (int i = 0; i < size; i++) {
		if (i <= 4) {
			n[i] = s1[i];
			cout << n[i] << ' ';
		}
		else {
			n[i] = s2[i - 5];
			cout << n[i] << ' ';
		}
	}
	cout << endl;
	return n;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다.\t";
	int* n = new int[size];
	int count = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) break;
			if (j == size - 1) {
				n[count] = s1[i];
				count++;
			}
		}
	}
	retSize = count;
	cout << "개수는 " << retSize << endl;
	for (int i = 0; i < retSize; i++) {
		cout << n[i] << ' ';
	}
	return n;
}
