#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "real_hash.h"

int real_string_hash(std::string str_for_r_hash, int p_for_hash, int n_for_hash)
{
	int hash = 0;
	long long int temp = 0;
	for (int i = 0; i < str_for_r_hash.length(); i++)
	{
		temp += static_cast<int> (str_for_r_hash[i]) * pow(p_for_hash, i);
		//std::cout << "\ncode " << str_for_r_hash[i] << " p ^ i " << pow(p_for_hash, i)<< " hash " << temp << std::endl;
	}
	return temp % n_for_hash;
}