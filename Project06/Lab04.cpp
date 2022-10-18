#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

class Person {                                               //부모 클래스인 Person 클래스 생성
private:
	string name;                                              // 각각 변수인 name, age, address를 설정
	int age=10;                                               // age와 address의 초기값을 설정하지 않았더니 오류가 발생 따라서 초기값 설정.
	string address="daejeon";
public :
	Person(string name, int age, string address) : name(name) {}         //class Diagram에서 getName,getAge,getAddress로 구성되어 있어 만들어준다.
		string getName() {
			return name;
		}
		void showName() {
			cout << "Name: " << getName() << "\n";
	}
		int getAge() {
			return age;
		}
		void showAge() {
			cout << "Age: " << getAge() << "\n";
		}
		string getAddress() {
			return address;
		}
		void showAddress() {
			cout << "Address: " << getAddress() << "\n";
		}
};
class Student : Person {                            // 자식 클래스인 student를 person클래스로 부터 상속받는다.
private:
	int studentID;                          // 변수 설정

public:
	Student(string name,int age,string address, int studentID) : Person(name,age,address) {           //부모 클레스로부터 변수를 받아 studentID추가
		this->studentID = studentID;
	} 
	void show() {                                                                      // 학번을 받는 메소드 추가
		cout << "Student Information" <<"\n";
		cout << "Name: " << getName()<<"\n";
		cout << "Age: " << getAge() << "\n";
		cout << "Address: " << getAddress() << "\n";
		cout << "Student ID: " << studentID << "\n";
	}
};                                                                            //출력
int main(void) {
	Student student("안지훈",10,"daejeon",201902714);
	student.show();
}