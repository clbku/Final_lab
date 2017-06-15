#include <iostream>
using namespace std;
class Date{
private:
	int day;
	int month;
	int year;
public:
	friend istream& operator>>(istream &input, Date &d){
		input >> d.day >> d.month >> d.year;
		return input;
	}
	friend ostream& operator<<(ostream &output, Date &d){
		output << d.day / 10 << d.day % 10 << "/" << d.month / 10 << d.month % 10 << "/" << d.year;
		return output;
	}
};
int main(){
	Date d;
	std::cin >> d; 
	std::cout << d;
	system("pause");
	return 0;
}