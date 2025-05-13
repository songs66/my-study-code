#include<bits/stdc++.h>
using namespace std;
class matrix 
{
private:
    int rows;
    int cols;
    int** data;
    void free_memory() 
	{
        if (data != NULL) 
		{
            for (int i = 0; i < rows; ++i) 
			{
                delete[] data[i];
            }
            delete[] data;
            data = NULL;
        }
    }
public:
    matrix() : rows(0), cols(0), data(NULL) {}
    matrix(int m, int n) : rows(m), cols(n) 
	{
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) 
		{
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) 
			{
                data[i][j] = 0;
            }
        }
    }
    matrix(const matrix& other) : rows(other.rows), cols(other.cols)
	{
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) 
		{
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) 
			{
                data[i][j] = other.data[i][j];
            }
        }
    }
    ~matrix() 
	{
        free_memory();
    }
    void input() 
	{
        for (int i = 0; i < rows; ++i) 
		{
            for (int j = 0; j < cols; ++j) 
			{
                cin >> data[i][j];
            }
        }
    }
    void display() const 
	{
        for (int i = 0; i < rows; ++i) 
		{
            for (int j = 0; j < cols; ++j) 
			{
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    matrix operator+(matrix other)
	{
        if (rows != other.rows || cols != other.cols) 
		{
            throw invalid_argument("Matrices must have the same dimensions for addition.");
        }
        matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) 
		{
            for (int j = 0; j < cols; ++j) 
			{
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
    matrix operator-(matrix other)
	{
        if (rows != other.rows || cols != other.cols) 
		{
            throw invalid_argument("Matrices must have the same dimensions for subtraction.");
        }
        matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) 
		{
            for (int j = 0; j < cols; ++j) 
			{
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }
    matrix& operator=(matrix other) 
	{
        if (this == &other) 
		{
            return *this;
        }
        free_memory();
        rows = other.rows;
        cols = other.cols;
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) 
		{
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) 
			{
                data[i][j] = other.data[i][j];
            }
        }
        return *this;
    }
};
int main() 
{
    int m, n;
    cin >> m >> n;
    matrix mat1(m, n), mat2(m, n), mat3, mat4;
    mat1.input();
    mat2.input();
    mat3 = mat1 + mat2;
    mat3.display();
    mat4 = mat1 - mat2;
    mat4.display();
    return 0;
}
