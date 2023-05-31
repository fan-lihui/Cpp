#include<iostream>
using namespace std;

//函数的声明
//比较函数，实现俩个整型数字进行比较，返回较大的值

//提前告诉编译器函数的存在，可以利用函数的声明
//函数的声明
//声明可以写多次，但是定义只能写一次
int max_1(int a,int b);

//int main()
//{
//	int a = 20;
//	int b = 39;
//	int num = max_1(a, b);
//	cout << "num=" << num << endl;
//	return 0;
//}
//定义
int max_1(int a, int b)
{
	return a > b ? a : b;
}


