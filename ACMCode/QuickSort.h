#pragma once
class QuickSort
{
private:
	HeapList m_list;
public:
	QuickSort(HeapList list);
	~QuickSort();
	void Quick_Sort(int start,int end);
	int Partition(int start, int end);
};

