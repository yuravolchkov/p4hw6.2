#include <iostream>
#include <string>
#include <cmath>
#include "real_hash.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // ������ ������� �����
	std::system("chcp 1251"); // ��������� ��������� �������
	std::system("cls"); // �������� �����
	int p, n;
	std::string str_enter;

	std::cout << "������� p: ";
	std::cin >> p;

	std::cout << "������� n: ";
	std::cin >> n;

	for (; str_enter != "exit";)
	{
		std::cout << "������� ������: ";
		std::cin >> str_enter;
		std::cout << "��� ������ " << str_enter << " = " << real_string_hash(str_enter,p,n) << std::endl;
	}

	return 62;
}