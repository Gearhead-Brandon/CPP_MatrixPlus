#include "../S21Matrix.hpp"

void S21Matrix::MulNumber(const double num) {

  for (int i = 0; i < rows_; i++)
    for (int j = 0; j < cols_; j++)
      matrix_[i][j] *= num;
}
