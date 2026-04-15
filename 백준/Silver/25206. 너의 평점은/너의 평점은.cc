#include <iostream>
#include <string>
using namespace std;

int main()
{
	string subject, grade;
	float credit;
	float totalGrade = 0, totalCredit = 0;
	for (int i = 0; i < 20; i++) {
		cin >> subject >> credit >> grade;

		if (grade == "A+") {
			totalGrade += credit * 4.5;
		}
		else if (grade == "A0") {
			totalGrade += credit * 4.0;
		}
		else if (grade == "B+") {
			totalGrade += credit * 3.5;
		}
		else if (grade == "B0") {
			totalGrade += credit * 3.0;
		}
		else if (grade == "C+") {
			totalGrade += credit * 2.5;
		}
		else if (grade == "C0") {
			totalGrade += credit * 2.0;
		}
		else if (grade == "D+") {
			totalGrade += credit * 1.5;
		}
		else if (grade == "D0") {
			totalGrade += credit * 1.0;
		}
		else if (grade == "F") {
			totalGrade += credit * 0;
		}
		else {
			continue;
		}
		totalCredit += credit;
	}
	cout << totalGrade / totalCredit;
 	return 0;
}