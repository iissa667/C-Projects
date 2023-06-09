#include <iostream>
#include <string>

using namespace std;

int DateParser(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
string input;
while (getline(cin, input)) {
if (input == "-1") {
break;
}
size_t pos1 = input.find_first_of(" ");
size_t pos2 = input.find_first_of(",");
size_t pos3 = input.find_last_of(" ");
if (pos1 == string::npos || pos2 == string::npos || pos3 == string::npos) {
continue;
}
string month = input.substr(0, pos1);
int day = stoi(input.substr(pos1+1, pos2-pos1-1));
int year = stoi(input.substr(pos3+1));
int monthInt = DateParser(month);
if (monthInt == 0) {
continue;
}
cout << monthInt << "-" << day << "-" << year << endl;
}
return 0;
	
	// TODO: Read dates from input, parse the dates to find the ones
	//       in the correct format, and output in m-d-yyyy format

}
