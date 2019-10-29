#include<iostream>
#include <cassert> // for assert()
using namespace std;
class Matrix
{
private:
    double data[4][4];
public:
    Matrix()
    {
        // Set all elements of the matrix to 0.0
        for (int row=0; row < 4; ++row)
            for (int col=0; col < 4; ++col)
                data[row][col] = 0.0;
    }

    double& operator()(int row, int col);
    const double& operator()(int row, int col) const; // for const objects
};

double& Matrix::operator()(int row, int col)
{
    assert(col >= 0 && col < 4);
    assert(row >= 0 && row < 4);

    return data[row][col];
}

const double& Matrix::operator()(int row, int col) const
{
    assert(col >= 0 && col < 4);
    assert(row >= 0 && row < 4);

    return data[row][col];
}

int main()
{
    Matrix matrix;
    matrix(1, 2) = 4.5;
    cout << matrix(1, 2);

    return 0;
}
