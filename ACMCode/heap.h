#pragma once
//������
class heap
{
private:
	HeapList m_heaps;
public:
	heap(HeapList m_heaps);
	~heap();
	 void Max_Heapiey(int i);//ȷ��һ������
	 void Build_Max_Heap();//����һ����
	 void Heap_Sort();//���ж�����
	 HeapList getList();
};

