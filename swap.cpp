#include"swap.h" //�����Լ���д��ͷ�ļ���Ҫʹ��˫����

//���庯��
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}