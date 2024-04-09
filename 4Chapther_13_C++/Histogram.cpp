#include "Histogram.h"

int Histogram::getAlpha() {
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			count++;
			s[i] += 32;						//대문자 알파벳을 아스키코드를 활용하여 소문자로 변환
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			count++;
		}
	}
	return count;
}
void Histogram::countAlpha() {
	//소문자로 이루어진 문자열을 alpha[26](26은 알파벳 개수)에 입력
	int j;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			j = s[i] - 'a';					
			//alpha[j]++;
			alpha[j] = alpha[j] + 1;
		}
	}
}
void Histogram::print() {
	cout << s << endl;
	cout << "총 알파벳 수 " << getAlpha() << endl;
	countAlpha();
	char c = 'a';
	for (int i = 0; i < 26; i++) {
		cout << c << "(" << alpha[i] << ")	:";
		for (int j = 0; j < alpha[i]; j++) {
			cout << '*';
		}
		cout << endl;
		c++;
	}
}
