#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string s;
	int alpha[26] = { 0 };				//alpha[26] 값 초기화
public :
	Histogram(string s) { this->s = s; }	
	void put(string s1) { s += s1; }	//string 문자열 끼리 + 연산자를 사용하면 문자열 연결이 됨.
	void putc(char c) { s += c; }		//string과 char도 + 연산자를 사용하면 연결이됨
	void print();
	int getAlpha();
	void countAlpha();
};