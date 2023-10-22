#include <iostream>
#include <fstream>
using namespace std;

const int MAX = 100; 

// Function prototypes
void readMatrix(int mat[][MAX], int &n, string filename);
void printMatrix(int mat[][MAX], int n);
void addMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n);
void multiplyMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n);
void subtractMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n);

int main() {

  int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX], n;
  
  // Read matrix data from file 
  readMatrix(A, n, "matrix_input.txt");
  readMatrix(B, n, "matrix_input.txt");

  // Print A and B
  cout << "Matrix A:" << endl;
  printMatrix(A, n);

  cout << "Matrix B:" << endl;
  printMatrix(B, n);

  // Add A and B
  addMatrix(A, B, result, n);
  cout << "Matrix Sum (A + B):" << endl;
  printMatrix(result, n);

  // Multiply A and B 
  multiplyMatrix(A, B, result, n);
  cout << "Matrix Product (A * B):" << endl;
  printMatrix(result, n);

  // Subtract A and B
  subtractMatrix(A, B, result, n);
  cout << "Matrix Difference (A - B):" << endl;
  printMatrix(result, n);

  return 0;
}

// Function definitions below main()

void readMatrix(int mat[][MAX], int &n, string filename) {
  // Implementation to read matrix from file
}

void printMatrix(int mat[][MAX], int n) {
  // Implementation to print matrix 
}

void addMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n) {
  // Implementation to add two matrices
}

void multiplyMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n) {
  // Implementation for matrix multiplication
}

void subtractMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int n) {
  // Implementation to subtract two matrices
}