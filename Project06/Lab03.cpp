#include<stdio.h>
#include<iostream>
#include<exception>
#include<string>
using namespace std;
class A : std::exception { //class A ����
	public: 
		
		A() { std::cout << "Constructor()\n"; }          //class A ������, �Ҹ��ڸ� ����(count)
		~A() { std::cout << "Destuctor()\n"; }
		int count=10;
};
int main() {
	try {
		A a;                                  //try ���� A object ����
		throw a;
	}
	catch (const A a) {                                         // throw�� �� a�� a.count�� ���� catch������ ����Ѵ�.
		std::cout << "Catch  " << a.count << endl;
	}
}