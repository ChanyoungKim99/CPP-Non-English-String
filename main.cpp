#include <iostream>

int main()
{
	int myInteger{ 5 };

	char myString[]{ " is integer value" };

	std::cout << myInteger + myString << std::endl;

	// ���ϴ� �ǵ� = 5 is integer value
	// ���� �� = nterger value

	std::cout << myString + myInteger << std::endl;

	// myString + myInteger = ������ + 5 = ������ ����
	// ������ + 5 = 5 + ������


	char myString2[]{ " �� �����Դϴ�." };

	std::cout << myInteger + myString2 << std::endl;

	// �̻��ϰ� ��µȴ�
	// ��� �ƴ� ���ڵ鿡�� ��Ÿ���� ������
	// int myInteger{ 4 } �� �ȴ�. ��?
	// main2��...


}