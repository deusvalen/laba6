
	class Matrix
	{
	private:
		int rows_;
		int cols_;
		int size_;
		int **mat; // ��������� ������ i , j
		double det_;

	public:
		Matrix();// ����������� �� ���������
		Matrix(int, int ); // ����������� � �����������
		~Matrix(); // ����������� ������ Matrix
		Matrix(const Matrix &obj); // ����������� �����������
		double Det(); // ������������
		void setMatrix(int, int); // ���������� �������
		void setElem(int , int , int);
		int getElem(int, int);
		void getMatrix(); // ����� �������
		int getMatrixrows();
		int getMatrixcols();

		// ��������������� ���������� : 

		friend Matrix operator + (const Matrix& x , const Matrix& y) 
		{
		  Matrix result(x.rows_,x.rows_);
		  for (int i = 0; i < x.rows_; i++)
		  {
			for (int j = 0; j < x.cols_; j++)
			{
				result.mat[i][j] = x.mat[i][j] + y.mat[i][j];
			}
		  }
		return result;
		}

		friend Matrix operator == (const Matrix& x , const Matrix& y) 
		{
		  for (int i = 0; i < x.rows_; i++)
		  {
			for (int j = 0; j < x.cols_; j++)
			{
				x.mat[i][j] =  y.mat[i][j];
			}
		  }
		return x;
		}

		 friend bool operator > (const Matrix& x, const Matrix& y) 
		 {
			 if(x.det_ > y.det_)
			 {
			 return true;
			 }
			 return false;
		 }  

		 int operator()(int n, int m) 
		 {	 
			 return this->getElem(n-1,m-1);
		 }
	};