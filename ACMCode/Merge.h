#pragma once
//归并排序
class Merge
{
public:
	Merge();
	~Merge();
	void MERGE(int *a,int p,int q,int r);//执行归并操作
	void MERGE_SORT(int *a,int p,int r);//执行拆解操作
};

