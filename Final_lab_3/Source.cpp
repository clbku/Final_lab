#include <iostream>
using namespace std;
void tong(int mang[], int n, int N){
	if (n != 0) tong(mang, n - 1, N);
	if (n < N / 2) cout << mang[n] + mang[N - 1 - n] << " ";
	if (n == N - 1 - n) cout << mang[n];
}
int main(){
	int N;
	cout << "Nhap so phan tu mang: "; cin >> N; cin.ignore();
	int* mang = new int[N];
	cout << "Nhap phan tu mang: ";
	for (int i = 0; i < N; i++){
		cin >> mang[i];
	}
	tong(mang, N, N);
	system("pause");
	return 0;
}