#include<stdio.h>
#include<iostream>
using namespace std;
class a {   //Ŭ���� a ����
	int a;   // �������� a���� ����
};
void main() {
	int a = 5;    // ���� a�� 5�� ����
	std::cout << "a: " << a << std::endl;
	a++;                          // a++
	std::cout << "a++: " << a << std::endl;
	++a;                     //+a
	std::cout << "++a: " << a << std::endl;

	getchar();
}