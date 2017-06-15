#include<iostream>
#define Max 100
using namespace std;
class Matrix {
private:
	int N, M;
	double B[Max], A[Max][Max];
public:
	Matrix(int N, int M) {
		this->N = N;
		this->M = M;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cout << "Nhap vao phan tu A[" << i + 1 << "][" << j + 1 << "] : ";
				cin >> A[i][j];
			}
		}
		for (int i = 0; i < M; i++) {
			B[i] = 0;
		}
	};
	void Tinh(Matrix c) {
		cout << "Ma tran B: ";
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				B[i] += A[j][i];
			}
			cout << B[i] << "  ";
		}
	}

};
int main() {
	Matrix c(2, 2);
	c.Tinh(c);
	system("pause");
	return 0;
}