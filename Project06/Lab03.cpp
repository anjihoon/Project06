#include<stdio.h>
#include<iostream>
#include<exception>
#include<string>
using namespace std;
class A : std::exception { //class A 생성
	public: 
		
		A() { std::cout << "Constructor()\n"; }          //class A 생성자, 소멸자를 정의(count)
		~A() { std::cout << "Destuctor()\n"; }
		int count=10;
};
int main() {
	try {
		A a;                                  //try 문에 A object 생성
		throw a;
	}
	catch (const A a) {                                         // throw된 값 a를 a.count을 통해 catch문에서 출력한다.
		std::cout << "Catch  " << a.count << endl;
	}
}