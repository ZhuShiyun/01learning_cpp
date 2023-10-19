/**
  ******************************************************************************
  * @file           : matclass.cpp
  * @author         : b-zhushiyun
  * @brief          : reuse code - copy
  * @attention      : Not a good way!
  * @date           : 23-10-18
  ******************************************************************************
  */
#include <iostream>
using namespace std;

// Class IntMat
class IntMat
{
        size_t rows;
        size_t cols;
        int * data;
    public:
        IntMat(size_t rows, size_t cols):
                        rows(rows), cols(cols)
        {
            data = new int[rows * cols]{};
        }
        ~IntMat()
        {
            delete [] data;
        }
        IntMat(const IntMat&) = delete; // 如果不写这一句，compiler会自动提供一个copy constructor
        IntMat& operator=(const IntMat&) = delete; // 同样的，这一句放在这里意思是不要编译器提供默认的操作符重载，防止内存发生问题
        int getElement(size_t r, size_t c);
        bool setElement(size_t r, size_t c, int value);
};

int IntMat::getElement(size_t r, size_t c)
{ // 先检查参数是否正确
    if ( r >= this->rows || c >= this->cols) // 检查有无越界
    {
        cerr << "Indices are out of range" << endl;
        return 0;
    }
    return data[ this->cols * r + c];
}

bool IntMat::setElement(size_t r, size_t c, int value)
{
    if ( r >= this->rows || c >= this->cols)
        return false;

    data[ this->cols * r + c] = value;
    return true;
}

// Class FloatMat
class FloatMat
{
        size_t rows;
        size_t cols;
        float * data;
    public:
        FloatMat(size_t rows, size_t cols):
                        rows(rows), cols(cols)
        {
            data = new float[rows * cols]{};
        }
        ~FloatMat()
        {
            delete [] data;
        }
        FloatMat(const FloatMat&) = delete;
        FloatMat& operator=(const FloatMat&) = delete;
        float getElement(size_t r, size_t c);
        bool setElement(size_t r, size_t c, float value);
};
float FloatMat::getElement(size_t r, size_t c)
{
    if ( r >= this->rows || c >= this->cols)
    {
        cerr << "getElement(): Indices are out of range" << endl;
        return 0.f;
    }
    return data[ this->cols * r + c];
}
bool FloatMat::setElement(size_t r, size_t c, float value)
{
    if ( r >= this->rows || c >= this->cols)
    {
        cerr << "setElement(): Indices are out of range" << endl;
        return false;
    }
    data[ this->cols * r + c] = value;
    return true;
}

int main()
{
    IntMat imat(3,4);
    imat.setElement(1, 2, 256);
    FloatMat fmat(2,3);
    fmat.setElement(1, 2, 3.14159f);

    // FloatMat fmat2(fmat); //error

    // FloatMat fmat3(2,3);
    // fmat3 = fmat; //error

    cout << imat.getElement(1,2) << endl;
    cout << fmat.getElement(1,2) << endl;

    return 0;
}
