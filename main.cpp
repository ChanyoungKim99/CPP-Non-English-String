#include <iostream>

int main()
{
	int myInteger{ 5 };

	char myString[]{ " is integer value" };

	std::cout << myInteger + myString << std::endl;

	// 원하는 의도 = 5 is integer value
	// 나온 값 = nterger value

	std::cout << myString + myInteger << std::endl;

	// myString + myInteger = 포인터 + 5 = 포인터 연산
	// 포인터 + 5 = 5 + 포인터


	char myString2[]{ " 는 정수입니다." };

	std::cout << myInteger + myString2 << std::endl;

	// 이상하게 출력된다
	// 영어가 아닌 문자들에서 나타나는 문제다
	// int myInteger{ 4 } 은 된다. 왜?
	// main2로...


}