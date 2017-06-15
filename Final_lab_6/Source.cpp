#include <iostream>
using namespace std;
struct ThiSinh{
	char ms[13];
	char ten[30];
	double diem1;
	double diem2;
	double diem3;
};
ThiSinh* CaoNhat(ThiSinh a[], int n, int& toado){
	double max = 0;
	for (int i = 0; i < n; i++){
		if (a[i].diem1 + a[i].diem3 + a[i].diem2 > max) {
			max = a[i].diem1 + a[i].diem3 + a[i].diem2;
			toado = i;
		}
	}
	return a+toado;
}
int main(){
	int n;
	cout << "Nhap so thi sinh: "; cin >> n; cin.ignore();
	ThiSinh* ts = new ThiSinh[n];
	for (int i = 0; i < n; i++){
		cout << "Nhap ms: "; cin >> ts[i].ms;
		cout << "Ten: "; cin >> ts[i].ten;
		cout << "Nhap d1: "; cin >> ts[i].diem1; cin.ignore();
		cout << "Nhap d2: "; cin >> ts[i].diem2; cin.ignore();
		cout << "Nhap d3: "; cin >> ts[i].diem3; cin.ignore();
		cout << &ts[i];
		cout << endl;
	}
	int toado = 0;
	cout << CaoNhat(ts, n, toado);

	system("pause");
	return 0;
}