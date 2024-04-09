#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string s;
	int alpha[26] = { 0 };				//alpha[26] �� �ʱ�ȭ
public :
	Histogram(string s) { this->s = s; }	
	void put(string s1) { s += s1; }	//string ���ڿ� ���� + �����ڸ� ����ϸ� ���ڿ� ������ ��.
	void putc(char c) { s += c; }		//string�� char�� + �����ڸ� ����ϸ� �����̵�
	void print();
	int getAlpha();
	void countAlpha();
};