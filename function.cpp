#include "function.h"
using namespace std;


Function::Function(string num)
{
	function = num;
	int temp_size = function.size();
	cout<<temp_size<<"eto temp"<<endl;
	size = 0;
	int temp = temp_size;
	while(temp_size != 1)
	{
		temp_size=temp_size/2;
		size++;
	}

	temp_size = temp;
	for (int i = 0; i < temp_size; ++i)
	{
		if (function[i]=='1')
		{
			// listoftrue.push_back(to_string(dec2bin(temp_size)));
			cout<<helptobin(to_string(dec2bin(i)))<<endl;
		}
	}

}



int Function::dec2bin(int num)
{
	int bin = 0, k = 1;

	while (num)
	{
		bin += (num % 2) * k;
		k *= 10;
		num /= 2;
	}

	return bin;
}	

string Function::helptobin(string temp_s)
{
	for (int i = temp_s.size(); i < size; ++i)
	{
		temp_s = '0' + temp_s;
		// cout<<temp_s<<"TEM_S"<<endl;

		
	}
	return temp_s;
}