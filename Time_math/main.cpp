#include "head.h"

int main()
{
	std::unique_ptr<AbstractFactory_Time> factory1 = std::make_unique<ConcretreFactory_Time>();

	Client client1(std::move(factory1));

	int result;
	printf("�Է�\n");
	scanf_s("%d", &result, sizeof(result));
	
	std::cout << "�ð�"		<< "\t" << client1.time(result) << std::endl;
	std::cout << "��"		<< "\t" << client1.Minute(result) << std::endl;
	std::cout << "��"		<< "\t" << client1.Seconde(result) << std::endl;
	std::cout << "�и���"	<< "\t" << client1.Millisecond(result) << std::endl;
	return 0;
}