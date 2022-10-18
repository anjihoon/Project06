#include<stdio.h>
#include<iostream>
#include<exception>
using namespace std;

struct except : std::exception {
	const char* what() const noexcept { return "NewException"; }
}; // struct 구조체를 사용하여 what()을 오버라이팅 하여 새로운 exception을 정의
int main() {
  try {
      throw except();
  } catch (std::exception& e) {    // NewException 문자열을 오버라이팅 된 
      cout << "My exception is ";   // what()에서 밭아 에러 원인 메세지를 리턴.
      std::cout << e.what() << endl;
  }
  return 0;
}