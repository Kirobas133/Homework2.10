#include <iostream>
#include <Windows.h>
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string name;
	std::cout << "������� ���: " << std::endl;
	std::cin >> name;
	std::cout << "������������, " << name << "!\n";
	system("pause");
	return 0;
}