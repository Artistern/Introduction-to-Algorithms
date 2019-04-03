// Test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
void test()
{
	int j = 0;
	while (j < 3)
	{
		for (int i = 1; i <= 5; i++)
		{
			if (j == 0)
			{
				std::cout << i << "\t";
			}
			else
			{
				std::cout << i * (2 * j) << "\t";
			}
		}
		std::cout << std::endl;
		j++;
	}
}
int fle(int n)
{
	if(n==1)
	{
		return 1;
	}else if(n==2)
	{
		return 1;
	}else
	{
		return fle(n - 1) + fle(n - 2);
	}
}
int newfl(size_t n)
{
	long long n1 = 0, n2 = 1, n3 = n;
	int i = 0;
	for (i = 2; i <= n; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return n3;
}
int main()
{
	int value = 0;
	int j = 0;
	while(j<10)
	{
		for (int i = 0; i < 4; i++)
		{
			int flag=0;
			int temp = newfl(++value);
			int temp1 = temp;
			while(temp1>10)
			{
				temp1 = temp1 / 10;
				flag++;
			}
			for(int m=0;m<(13- flag);m++)
			{
				std::cout << " ";
			}
			std::cout << temp;
		}
		std::cout << std::endl;
		j++;
	}
}
