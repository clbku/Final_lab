#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
using namespace std;
class DaThuc{
private:
public:	
	int N;
	int heso[11];
	void nhap(int, int*);
	void xuat();
	
	DaThuc nhan(DaThuc, DaThuc);
};
void DaThuc::nhap(int N, int hs[]){
	this->N = N;
	for (int i = N; i >=0 ; i--){
		heso[i] = hs[i];
	}
}
DaThuc DaThuc::nhan(DaThuc p1, DaThuc p2){
	this->N = p1.N+p2.N;
	for (int i = this->N; i >= 0; i--){
		this->heso[i] = 0;
		for (int j = p1.N; j >= 0; j--){
			for (int k = p2.N; k >= 0; k--){
				if (j+k==i) this->heso[i] += p1.heso[j] * p2.heso[k];
			}
		}
	}
	return *this;
}
void DaThuc::xuat(){
	for (int i = N; i >= 0; i--){
		if (heso[i] != 0){
			if (i == 0) cout << heso[i];
			else if (i == 1) cout << heso[i] << "X";
			else cout << heso[i] << "X^" << i;
			if (heso[i - 1] > 0) cout << "+";
		}
		
		else continue;
	}
	cout << endl;
}
//DaThuc::~DaThuc(){
//	delete[] heso;
//	heso = NULL;
//}
int* random(int n){
	int* hs = new int[n + 1];
	for (int i = 0; i < n + 1; i++){
		hs[i] = rand() % 10 - 10;
	}
	return hs;
}
int main(){
	srand(time(0));
	DaThuc p1, p2, p3;
	int n;
	cout << "Nhap bac cua bieu thuc thu nhat : "; cin >> n;
	p1.nhap(n, random(n));
	cout << "Nhap bac cua bieu thuc thu hai : "; cin >> n;
	p2.nhap(n, random(n));
	p1.xuat(); cout << endl;
	p2.xuat(); cout << endl;
	p3.nhan(p1, p2);
	p3.xuat();
	system("pause");
	return 0;
}