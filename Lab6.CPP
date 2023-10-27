#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 100;

// Function prototypes
void printMatrix(int mat[][MAX], int n, string name);
void addMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n);
void multiplyMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n);
void subtractMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n);

int main() {

  int A[MAX][MAX] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int B[MAX][MAX] = {{2, 3, 4}, {5, 6, 7}, {8, 9, 10}};
  int result[MAX][MAX];
  int n = 3;

  // Print A and B
  cout << "Omar Faruque" << endl;
  cout << "Lab #6: Matrix manipulation" << endl << endl;

  printMatrix(A, n, "Matrix A");
  printMatrix(B, n, "Matrix B");

  // Add A and B
  addMatrix(A, B, result, n);
  cout << "Matrix Sum (A + B):" << endl;
  printMatrix(result, n, "");

  // Multiply A and B 
  multiplyMatrix(A, B, result, n);
  cout << "Matrix Product (A * B):" << endl;
  printMatrix(result, n, "");

  // Subtract A and B
  subtractMatrix(A, B, result, n);
  cout << "Matrix Difference (A - B):" << endl;
  printMatrix(result, n, "");

  return 0;
}

// Function definitions below main()

void printMatrix(int mat[][MAX], int n, string name) {
  cout << name << ":" << endl;
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          cout << mat[i][j] << " ";
      }
      cout << endl;
  }
  cout << endl;
}

void addMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n) {
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          result[i][j] = mat1[i][j] + mat2[i][j];
      }
  }
}

void multiplyMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n) {
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          result[i][j] = 0;
          for (int k = 0; k < n; k++) {
              result[i][j] += mat1[i][k] * mat2[k][j];
          }
      }
  }
}

void subtractMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n) {
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          result[i][j] = mat1[i][j] - mat2[i][j];
      }
  }
}
