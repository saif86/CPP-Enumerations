/**
* @file Example1_Enumerations.cpp
*
* @brief C++ Program to declare and define enumerations
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;

enum Seasons { SPRING, SUMMER, AUTUMN, WINTER };

// function main begins program execution
int main() {
	Seasons s;

	s = SPRING;
	cout << "spring = " << s << endl;

	s = SUMMER;
	cout << "summer = " << s << endl;

	s = AUTUMN;
	cout << "autumn = " << s << endl;

	s = WINTER;
	cout << "winter = " << s << endl;

	system("pause");
	return 0;
}
