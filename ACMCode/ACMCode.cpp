
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include "Merge.h"
#include "InsetSort.h"
#include "QuickSort.h"

int main()
{
	//归并排序
	/*int *List;
	int length;
	std::cout << "请输入字符长度" << std::endl;
	std::cin >> length;
	List = (int *)malloc(length * sizeof(int));
	std::cout << "请输入字符" << std::endl;
	for(int i=0;i<length;i++)
	{
		std::cin >> List[i];
	}
	Merge merge;
	merge.MERGE_SORT(List, 0, length-1);
	
	for (int i = 0; i < length; i++)
	{
		std::cout << List[i] << "\t";
	}
	free(List);*/
	//堆排序
	HeapList heapList;
	int lengh;
	int m = 0;
	
	std::cout << "请输入堆的长度" << std::endl;
	std::cin >> lengh;
	heapList.node = (int*)malloc(lengh * sizeof(int));
	heapList.Length = lengh;
	for(int i=0;i<lengh;i++)
	{
		std::cin >> heapList.node[i];
	}	
	//heap heap(heapList);
	//heap.Heap_Sort();

	//InsetSort inset;
	//inset.INSERTINGSORT(heapList);

	QuickSort quick_sort(heapList);
	quick_sort.Quick_Sort(0, heapList.Length);
	for (int i = 0; i < lengh; i++)
	{
		std::cout << heapList.node[i] <<"\t";
	}
	free(heapList.node);
	return 0;
}
