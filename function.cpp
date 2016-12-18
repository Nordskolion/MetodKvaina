#include "function.h"
using namespace std;


Function::Function(string num)
{
	function = num;
	int temp_size = function.size();
	// cout<<temp_size<<"eto temp"<<endl;
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
			listoftrue.push_back(helptobin(to_string(dec2bin(i))));
			// cout<<helptobin(to_string(dec2bin(i)))<<endl;
		}
	}

	listoftrueStepTwo = KvainStepOne(listoftrue);
	for (int i = 0; i < listoftrueStepTwo.size(); ++i)
	{
		cout<<listoftrueStepTwo[i]<<endl;
		/* code */
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



vector<string> Function::KvainStepOne(vector<string> list)
{
	bool flag = true;
	int delta = 0;
	vector<string> finaly;
	string for1time;
	int alpha = 0;

	for (int i = 0; i < list.size(); ++i)
	{
		for (int j = 0; j < list.size() ; ++j)
		{
			delta = 0;
			for (int a = 0; a < size; ++a)
			{
				if(list[i][a] != list[j][a])
				{
					delta++;
					alpha = a;
				}
			}
			if (delta == 1)
			{


				for1time = list[i];
				for1time[alpha]='*';
				flag = true;
				for (int l = 0; l < finaly.size() ; ++l)
				{
					
					if (for1time == finaly[l])
					{
						flag = false;
					}
					
				}
				

				if (flag)
				{
					finaly.push_back(for1time);	/* code */
				}
				
			}
		}
	}
	return finaly;
}