# CPP-Enumerations
Defining enumerations in C++

An enumeration is a user-defined type whose value is restricted to one of several explicitly named constants(enumerators). Enumeration are defined using keyword: enum.
```
enum seasons { spring, summer, autumn, winter };
```
This code is a enum declaration. After declaration, you can define variable of type seasons. And this variable of type seasons can only have one of those 4 values. For example:
```
#include <iostream> 
using namespace std; 

enum seasons { spring, summer, autumn, winter }; 

int main() { 
  seasons s; 
  s = autumn; // Correct 
  s = rainy; // Error
  
  return 0; 
}
```
In this program, an enum type seasons is declared with 4 enumerators (spring, summer, autumn, winter). Then, inside main() function, a variable s of type seasons is defined. This variable s can only store any one of four values (spring, summer, autumn, winter).

By default, the value of first enumerator is 0, second is 1 and so in. In this program, spring is equal to 0, summer is equal to 1 and autumn is 2 and winter is 3.

One very important thing to remember is that, spring, summer etc are not variables. They are treated as integers by compiler. Hence, once enumerators are defined, their value can't be changed in program.
### Example 1: C++ Enumeration
```
#include <iostream> 
using namespace std; 

enum seasons { spring, summer, autumn, winter }; 

int main() { 
  seasons s; 
  
  s = spring; 
  cout << "spring = " << s << endl; 
  
  s = summer; 
  cout << "summer = " << s << endl; 
  
  s = autumn; 
  cout << "autumn = " << s << endl; 
  
  s = winter; 
  cout << "winter = " << s << endl; 
  
  system("pause"); 
  return 0; 
}
### Output
```
spring = 0
summer = 1
autumn = 2
winter = 3
```
You can change the default value during enumeration declaration(after declaration, you cannot change it) and give them another value. Consider this example:
### Example 2: C++ Enumeration
```
#include <iostream> 
using namespace std;

enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32}; 

int main() { 
  seasons s; 
  
  s = summer; 
  cout << "summer = " << s << endl; 
  
  system("pause"); 
  return 0; 
}
### Output
```
summer = 4
```
