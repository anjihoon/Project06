#include<stdio.h>
#include<iostream>
using namespace std;
class a {   //클래스 a 설정
	int a;   // 정수형인 a변수 설정
};
void main() {
	int a = 5;    // 변수 a에 5값 설정
	std::cout << "a: " << a << std::endl;
	a++;                          // a++
	std::cout << "a++: " << a << std::endl;
	++a;                     //+a
	std::cout << "++a: " << a << std::endl;

	getchar();
}