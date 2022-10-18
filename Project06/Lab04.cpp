#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

class Person {                                               //�θ� Ŭ������ Person Ŭ���� ����
private:
	string name;                                              // ���� ������ name, age, address�� ����
	int age=10;                                               // age�� address�� �ʱⰪ�� �������� �ʾҴ��� ������ �߻� ���� �ʱⰪ ����.
	string address="daejeon";
public :
	Person(string name, int age, string address) : name(name) {}         //class Diagram���� getName,getAge,getAddress�� �����Ǿ� �־� ������ش�.
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
class Student : Person {                            // �ڽ� Ŭ������ student�� personŬ������ ���� ��ӹ޴´�.
private:
	int studentID;                          // ���� ����

public:
	Student(string name,int age,string address, int studentID) : Person(name,age,address) {           //�θ� Ŭ�����κ��� ������ �޾� studentID�߰�
		this->studentID = studentID;
	} 
	void show() {                                                                      // �й��� �޴� �޼ҵ� �߰�
		cout << "Student Information" <<"\n";
		cout << "Name: " << getName()<<"\n";
		cout << "Age: " << getAge() << "\n";
		cout << "Address: " << getAddress() << "\n";
		cout << "Student ID: " << studentID << "\n";
	}
};                                                                            //���
int main(void) {
	Student student("������",10,"daejeon",201902714);
	student.show();
}