#include <iostream>
#include <string>
#include <cmath>
#include "real_hash.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // задать русский текст
	std::system("chcp 1251"); // настроить кодировку консоли
	std::system("cls"); // очистить экран
	int p, n;
	std::string str_enter;

	std::cout << "¬ведите p: ";
	std::cin >> p;

	std::cout << "¬ведите n: ";
	std::cin >> n;

	for (; str_enter != "exit";)
	{
		std::cout << "¬ведите строку: ";
		std::cin >> str_enter;
		std::cout << "’эш строки " << str_enter << " = " << real_string_hash(str_enter,p,n) << std::endl;
	}

	return 62;
}