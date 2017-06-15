#include <iostream>
using namespace std;
void Duong(int mang[], int n){
	if (n != 0) Duong(mang, n - 1);
	if (mang[n] > 0) cout << mang[n] << " ";
}
int main(){
	int N;
	cout << "Nhap so phan tu mang: "; cin >> N; cin.ignore();
	int* mang = new int[N];
	cout << "Nhap phan tu mang: ";
	for (int i = 0; i < N; i++){
		cin >> mang[i];
	}
	Duong(mang, N);
	system("pause");
	return 0;
}