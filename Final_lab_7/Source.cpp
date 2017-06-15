
#include <iostream>
#include <string.h>
#define N 100
using namespace std;
class String{
private:
	int length;
	char * string;
public:
	friend ostream& operator<<(ostream &output, String &s){
		for (int i = 0; i < s.length; i++){
			output << s.string[i];
		}
		return output;
	}
	String(){
		length = 0;
		string = new char;
	}
	String(char * S){
		length = strlen(S);
		char *string1 = new char[length];
		string = string1;
		for (int i = 0; i < length; i++)
			string[i] = S[i];
	}
	String operator+(String &S){
		String s;
		s.length = length + S.length;
		s.string = new char[length];
		for (int i = 0; i < length; i++)
			s.string[i] = string[i];
		for (int i = 0; i < strlen(S.string); i++)
			s.string[i + length] = S.string[i];
		return s;
	}
	String operator+(char *S){
		String s;
		s.length = length + strlen(S);
		s.string = new char[s.length];
		for (int i = 0; i < length; i++)
			s.string[i] = string[i];
		for (int i = 0; i < strlen(S); i++)
			s.string[i + length] = S[i];
		return s;
	}
};



int main(){
	String str1("THI KIEM TRA");
	String str2("KTLT");
	cout << str1 << endl;
	cout << str2 << endl;

	cout << str1 + " " + str2;
	system("pause");
	return 0;
}