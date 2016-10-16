#include "matrix.h"
#include <iostream>
#include <iomanip> // ��� ������������ setw
#include <cstdlib>

using namespace std;
 
	Matrix::Matrix() // ����������� �� ���������
	{
	}
 
	Matrix::Matrix(int rows, int cols) // ����������� � �����������
	{
            mat = new int*[rows];
            for ( int i = 0; i < cols; i++ )
            {
                mat[i] = new int[cols];
            }
	rows_ = rows; cols_ = cols;
    cout << "������� ������� �������� " << rows << " �� " << cols <<" ���������."<<endl;
	}
 
	Matrix::~Matrix() // ����������� ������ Matrix
	{
	}

	Matrix::Matrix(const Matrix &obj)
	{
	}

	void Matrix::setMatrix(int rows, int cols)
	{
		rows_ = rows;
		cols_ = cols;
	}

	void Matrix::setElem(int i, int j, int x)
	{
		mat[i][j] = x;
	}

	int Matrix::getElem(int i, int j)
	{
		return mat[i][j];
	}

	int Matrix::getMatrixrows()
	{
		return rows_;
	}

	int Matrix::getMatrixcols()
	{
		return cols_;
	}

	double Matrix::Det() // ������� �����������
	{
		if (rows_ != cols_)
		{
			cout << "������� �� ����������, ������ ��������� ����������" << endl;
			return NULL;
		}
	int l;
	double d;
	double sum11=1,sum12=0, sum21=1, sum22=0;

    for (int i=0;i<rows_;i++)
    {
		sum11=1; l=2*rows_-1-i;sum21=1;
		for (int j=0;j<rows_;j++)
		{
			sum21*=mat[j][l%rows_];
			l--;
			sum11*=mat[j][(j+i)%(rows_)];
		}
		sum22+=sum21;
		sum12+=sum11;
    }
    d=sum12-sum22;
	det_ = d;
	return d;
	}

	void Matrix:: getMatrix()
	{
	for(int i=0;i<rows_;++i,cout<<endl)
      for(int j=0;j<rows_;++j)
           cout<<mat[i][j]<<" ";
	}
	
