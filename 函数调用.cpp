#include<iostream>
using namespace std;
//�ӷ���������
int add(int num1,int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a = 10;
	int b = 20;
	//����add����
	int c = add(a, b);
	cout << "c= " << c << endl;

	a = 40;
	b = 20;
	//����add����
	c = add(a, b);
	cout << "c= " << c << endl;
	system("pause");//�����������
	return 0;

}
