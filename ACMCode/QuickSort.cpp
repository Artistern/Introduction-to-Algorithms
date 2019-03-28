#include "pch.h"
#include "QuickSort.h"
#include <iostream>


QuickSort::QuickSort(HeapList list)
{
	m_list = list;
}


QuickSort::~QuickSort()
{
}
void QuickSort::Quick_Sort(int start,int end)
{
	end = end - 1;
	int q;
	if(start<=end)
	{
		//std::cout << m_list.Length << std::endl;
		q = Partition(start, end);
		Quick_Sort(start, q-1);
		Quick_Sort(q + 1, end);
	}
}
int QuickSort::Partition(int start, int end)
{
	int x = m_list.node[end];
	int i = start - 1;
	for(int j=start;j<end;j++)
	{
		if(m_list.node[j]<=x)
		{
			i = i + 1;
			//����a[i]��a[j]
			int temp = m_list.node[i];
			m_list.node[i] = m_list.node[j];
			m_list.node[j] = temp;
		}
	}
	//����a[i+1]��a[end]
	int temp = m_list.node[i + 1];
	m_list.node[i + 1] = m_list.node[end];
	m_list.node[end] = temp;

	return temp;
}


