#include <iostream>
using namespace std;

void joinArr1AndArr2 (int* ptr1, int count1, int* ptr2, int count2)
{
	int array3[50];
	int index1 = 0;
	int index2 = 0;
	int index3 = 0;
	
	while (index1 < count1 && index2 < count2)
	{
		if (ptr1[index1] < ptr2[index2])
		{
			array3[index3] = ptr1[index1];
			index1++;
		}
		else
		{
			array3[index3] = ptr2[index2];
			index2++;
		}
		index3++;
	}
	
	while (index1 < count1)
	{
		array3[index3] = ptr1[index1];
		index1++;
		index3++;
	}
	
	while (index2 < count2)
	{
		array3[index3] = ptr2[index2];
		index2++;
		index3++;
	}
	
	for (int i = 0; i < index3; i++)
	{
		cout << array3[i] << " ";
	}
}

int main()
{
 	int array1[] = {2, 4, 6, 8, 10, 12, 14};
 	int array2[] = {1, 3, 5, 7, 9, 11, 13};
 	joinArr1AndArr2 (array1, sizeof(array1) / sizeof(array1[0]), array2, sizeof(array2) / sizeof (array2[0]));
 	
    return 0;
}
