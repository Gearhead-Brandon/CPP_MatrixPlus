#include "../S21Matrix.hpp"

S21Matrix S21Matrix::operator*(const S21Matrix &other) {

  S21Matrix temp(*this);
  temp.MulMatrix(other);

  return temp;
}