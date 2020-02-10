#include<iostream>
#include<algorithm>

using namespace std;

//ѡ������
//��һ��ѡ����С�����һ��Ԫ�ؽ�����
//�ڶ��ִ�ʣ�µ�������ѡ����С����ڶ���Ԫ�ؽ���
void selectSort(int* array, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (array[i]>array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
}

//��������
//�ó�һ��Ԫ�أ��ڸ�Ԫ��֮ǰ�������������ҵ����ʵ�λ��
void insertSort(int* array, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int temp = array[i+1];
		int idx = i + 1;
		for (int j = i; j >= 0; j--)
		{
			if (temp<array[j])
			{
				array[j + 1] = array[j];
				idx = j;
			}
			else
			{
				break;
			}
		}
		array[idx] = temp;
	}
}

//��һ��ѭ����ʽд��������
void insertSort2(int *array, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int temp = array[i + 1];
		int idx = i + 1;
		int j = i;
		while (array[j]>temp && j>=0)
		{
			array[j + 1] = array[j];
			idx = j;
			j--;
		}
		array[idx] = temp;
	}
}

//ð������
void bubbleSort(int *array, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (array[j]>array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}

//ð�ݸĽ�
//���exchange��������¼�Ƿ��н���
void bubbleSort2(int * array, int len)
{
	int exchange = 1;
	for (int i = 0; (i < len - 1) && exchange; i++)
	{
		exchange = 0;
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (array[j]>array[j + 1])
			{
				swap(array[j], array[j + 1]);
				exchange = 1;
			}
		}
	}
}

//��������
int partition(int *array, int low, int high)
{
	while (low < high)
	{
		int pivot = array[low];
		while ((low<high) && (array[high]>=pivot))
		{
			high--;
		}
		swap(array[high], array[low]);
		while ((low<high) && (array[low]<=pivot))
		{
			low++;
		}
		swap(array[low], array[high]);
	}
	return low;
}

void quickSort(int *array, int low, int high)
{
	if (low < high)
	{
		int piv = partition(array, low, high);
		quickSort(array, low, piv - 1);
		quickSort(array, piv + 1, high);
	}
}

void qSort(int *array, int len)
{
	quickSort(array, 0, len - 1);
}

//��ӡ����
void printArray(int *array, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}


int main161020()
{
	int array[] = { 12, 1, 3, 1, 5};
	int len = sizeof(array) / sizeof(int);
	printArray(array, len);
	//selectSort(array, len);
	//insertSort2(array, len);
	//bubbleSort(array, len);
	//bubbleSort2(array, len);
	qSort(array, len);
	printArray(array, len);

	system("pause");
	return 0;
}


