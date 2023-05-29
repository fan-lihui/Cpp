#include<iostream>
using namespace std;
//加法函数定义
int add(int num1,int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a = 10;
	int b = 20;
	//调用add函数
	//a,b称为实际参数，简称实参
	int c = add(a, b);
	cout << "c= " << c << endl;

	a = 40;
	b = 20;
	//调用add函数
	c = add(a, b);
	cout << "c= " << c << endl;
	system("pause");//按任意键继续
	return 0;

}
