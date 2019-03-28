#include "pch.h"
#include "Merge.h"
#include <cstdlib>
#include <iostream>

Merge::Merge()
{
}


Merge::~Merge()
{
}
void Merge::MERGE(int* a, int p, int q, int r)
{
	int *Temp = (int *)malloc((r - p + 1) * sizeof(int));
	int i = p;
	int j = q+1;
	int k = 0;
	while (i <= p && j <= r)
	{
		if (a[i] <= a[j])
		{
			Temp[k] = a[i];
			i = i + 1;
		}
		else
		{
			Temp[k] = a[j];
			j = j + 1;
		}
		k = k + 1;
	}
	while (i <= q)
	{
		Temp[k] = a[i];
		k = k + 1;
		i = i + 1;
	}
	while (j <= r)
	{
		Temp[k] = a[j];
		k = k + 1;
		j = j + 1;
	}
	for (i=0;i<k;i++)
	{
		a[p + i] = Temp[i];
	}
	free(Temp);
}
void Merge::MERGE_SORT(int* a, int p, int r)
{
	int q;
	if(p<r)
	{
		q = (p + r) / 2;
		MERGE_SORT(a, p, q);
		MERGE_SORT(a, q + 1, r);
		MERGE(a, p, q, r);
	}
}




