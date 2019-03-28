#include "pch.h"
#include "heap.h"
#include <cstddef>
#include <iostream>


heap::heap(HeapList heap)
{
	m_heaps = heap;
}
heap::~heap()
{
}
void heap::Max_Heapiey(int i)
{
	int left = LEFT(i);
	int right = RIGHT(i);
	int Largest=NULL;
	if(left<= m_heaps.heap_size&&m_heaps.node[left]> m_heaps.node[i])
	{
		Largest = left;
		//std::cout << Largest << std::endl;
	}
	else { Largest = i; }
	if(right<= m_heaps.heap_size&&m_heaps.node[right]> m_heaps.node[Largest])
	{
		Largest = right;
		//std::cout << Largest << std::endl;
	}
	if(Largest!=i)
	{
		int temp = m_heaps.node[i];
		m_heaps.node[i] = m_heaps.node[Largest];
		m_heaps.node[Largest] = temp;
		Max_Heapiey(Largest);
	}
}

void heap::Build_Max_Heap()
{
	m_heaps.heap_size = m_heaps.Length;
	for(int i=m_heaps.Length/2;i>=0;i--)
	{
		Max_Heapiey(i);	
	}
}
void heap::Heap_Sort()
{
	int temp;
	Build_Max_Heap();//这一步完全正确
	for(int i=m_heaps.Length;i>=1;i--)
	{
		temp = m_heaps.node[0];
		//std::cout << m_heaps.node[0] << std::endl;
		m_heaps.node[0] = m_heaps.node[i];
		m_heaps.node[i] = temp;
		//std::cout << m_heaps.node[i] << std::endl;
		m_heaps.heap_size = m_heaps.heap_size - 1;
		Max_Heapiey(0);
	}
}
HeapList heap::getList()
{
	return m_heaps;
}




