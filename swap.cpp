#include"swap.h" //引入自己编写的头文件需要使用双引号

//定义函数
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}