#include <iostream>
#include <cstdlib>
#include "Windows.h"
#include "Matrix.h"
using namespace std;

void SetElements(Matrix *obj);

void main()
{
	setlocale(LC_ALL, "Russian");
    Matrix myMatrix1(3,3); // ����������� � �����������
	cout <<"������� ���������� �������� �������"<< endl;
	SetElements(&myMatrix1);
	cout <<"���������� ������� : \n"<< endl;
	cout << myMatrix1.Det() << "\n"<< endl;
	myMatrix1.getMatrix();
	cout << endl;

	Matrix myMatrix2(3,3);
	SetElements(&myMatrix2);
	cout <<"���������� ������� : \n"<< endl;
	cout << myMatrix2.Det() << "\n"<< endl;
	myMatrix1.getMatrix();
	cout << endl;


	Matrix myMatrix3 = myMatrix1 + myMatrix2;

	if ( myMatrix1 > myMatrix2 == true)
	{
		cout <<"myMatrix1 > myMatrix2"<< endl;
	}
	else
	{
		cout <<"myMatrix1 <  myMatrix2"<< endl;
	}

	int y;
	 y = myMatrix1(1,1) ;
	 cout << y << endl;

	 myMatrix1 == myMatrix2;
	 myMatrix1.getMatrix();

    system("pause");
}

void SetElements(Matrix *obj)
{
	int i , j; // i - ������ , j - �������
	i = obj->getMatrixrows();
	j = obj->getMatrixcols();
	int var; // ���������� ��� ���������� ��������
		for(int k = 0 ; k < i ; k++)
		{
			for(int p = 0 ; p < j; p++)
			{
				cin >> var ;
				obj->setElem(k,p,var);
				cout <<"["<<k+1<<"]"<<"["<<p+1<<"]"<<" = "<<  obj->getElem(k,p) << endl;
			}
		}
}


