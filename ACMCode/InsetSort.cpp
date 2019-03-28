#include "pch.h"
#include "InsetSort.h"
#include <iostream>


InsetSort::InsetSort()
{
}


InsetSort::~InsetSort()
{
}
void InsetSort::INSERTINGSORT(HeapList m_list)
{
	int key;
	int j;
	for(int i=1;i<m_list.Length;i++)
	{
		key = m_list.node[i];
		j = i - 1;
		while(j>=0&&m_list.node[j]>key)
		{
			m_list.node[j + 1] = m_list.node[j];
			std::cout << m_list.node[j+1] << "\t";
			j = j - 1;
			
		}
		m_list.node[j + 1] = key;
		std::cout << "\n";
		for(int m=0;m<m_list.Length;m++)
		{
			std::cout << m_list.node[m] << "\t";
		}
		std::cout << "\n";
	}
}