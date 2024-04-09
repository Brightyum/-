#include "Histogram.h"

int Histogram::getAlpha() {
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			count++;
			s[i] += 32;						//�빮�� ���ĺ��� �ƽ�Ű�ڵ带 Ȱ���Ͽ� �ҹ��ڷ� ��ȯ
		}
		else if (s[i] >= 'a' && s[i] <= 'z') {
			count++;
		}
	}
	return count;
}
void Histogram::countAlpha() {
	//�ҹ��ڷ� �̷���� ���ڿ��� alpha[26](26�� ���ĺ� ����)�� �Է�
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
	cout << "�� ���ĺ� �� " << getAlpha() << endl;
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
