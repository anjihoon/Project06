#include<stdio.h>
#include<iostream>
#include<exception>
using namespace std;

struct except : std::exception {
	const char* what() const noexcept { return "NewException"; }
}; // struct ����ü�� ����Ͽ� what()�� ���������� �Ͽ� ���ο� exception�� ����
int main() {
  try {
      throw except();
  } catch (std::exception& e) {    // NewException ���ڿ��� ���������� �� 
      cout << "My exception is ";   // what()���� ��� ���� ���� �޼����� ����.
      std::cout << e.what() << endl;
  }
  return 0;
}