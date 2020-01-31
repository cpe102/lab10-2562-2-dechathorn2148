// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	cout << "Press Enter 3 times to reveal your future.";
	cin.ignore();
	cin.ignore();
	cin.ignore();
	int i;
	string s;
	i = rand()%9 + 1;
	switch (i)
	{
		case 1 :
			s = "A";
			break;
		case 2 :
			s = "B+";
			break;
		case 3 :
			s = "B";
			break;
		case 4 :
			s = "C+";
			break;
		case 5 :
			s = "C";
			break;
		case 6 :
			s = "D+";
			break;
		case 7 :
			s = "D";
			break;
		case 8 :
			s = "F";
			break;
		case 9 :
			s = "W";
			break;							
	}
	cout << "You will get " << s << " in this 261102.";
}