/**
* @file Example2_Enumerations.cpp
*
* @brief C++ Program to declare enumerations with user defined values
*
* @author Saif Ullah Ijaz
*
*/

#include <iostream> 
using namespace std;

enum Seasons { SPRING = 34, SUMMER = 4, AUTUMN = 9, WINTER = 32 };

// function main begins program execution
int main() {
	Seasons s;

	s = SUMMER;
	cout << "summer = " << s << endl;

	system("pause");
	return 0;
}
// end main 
