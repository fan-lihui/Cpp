#include<iostream>
using namespace std;
//int main()
//{
//	//定义数组
//	int arr[9] = { 4,2,8,0,6,5,1,3,9 };
//	cout << "排序前:" << endl;
//	//遍历输出数组
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < 9 - 1; i++)//比较的轮次
//	{
//		for (int j = 0; j < 9 - 1 - i; j++)//每轮比较的次数
//		{
//			
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	cout << "排序后：" << endl;
//	//遍历输出数组
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//
//}