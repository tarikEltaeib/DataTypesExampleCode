#include <iostream>
using namespace std;
/* The essential data types used in C++ programming,
including int, float, char, and others, will be covered 
in this code .*/
int main()
{
	/*The declarations for variables in C++ are called data types. 
	The kind and amount of data that are linked to the variables 
	are decided by this. */

	//YourAge  is an int-type variable. 
	//The variable may only hold numbers that are either 2 or 4 bytes long.
	int YourAge = 25;

	//The ratio of a circle's circumference to its diameter π  
	//is known as the number, and it is a mathematical constant.
	/*Decimal and exponential floating-point values are stored using
	  the float and double data types.
	  Floats are 4 bytes in size, whereas doubles are 8 bytes.
	  Double thus has twice the precision of float.*/
	float Pi = 3.14;
	double accurate_Pi = 3.14159265359;

	//Bacteria may replicate at a rate of one new cell every 10-20 minutes. 
	double bacteria_exponential_growth_rate = 10.407E11; //10.407*10^11

	/*Each character occupies one byte.It's surrounded by single quotations''.*/
	char ExamGrad = 'A';

	/*The wchar_t data type is identical to char but uses two bytes rather than one.
     When a character's representation requires more space than a single char.*/
	wchar_t ExamResult = 'A-';

	/*Values of the bool data type may be either true or false.
	* In the subsequent chapters, we'll learn how to employ booleans 
	in conditional expressions and loops.*/
	bool Passed_the_exam = true;

	/*The void data type does not contain any values. 
	The 'void' keyword indicates situations in which knowing or not caring about 
	the nature of the information to be received is equally essential. 
	This is a common occurrence after getting a value from a function. 
	Studying functions and pointers will benefit significantly 
	by understanding the idea of a void.*/
	 
}