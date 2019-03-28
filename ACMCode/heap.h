#pragma once
//堆排序
class heap
{
private:
	HeapList m_heaps;
public:
	heap(HeapList m_heaps);
	~heap();
	 void Max_Heapiey(int i);//确定一个最大堆
	 void Build_Max_Heap();//创建一个堆
	 void Heap_Sort();//进行堆排序
	 HeapList getList();
};

