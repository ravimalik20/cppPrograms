/*
* Wisdom from Bjarne Stroutstrup. Taken from: A tour of C++, Chapter 1.
*
* We want our code to be comprehensible, because that is the first step on
* the way to maintainability. The first step to comprehensibility is to break
* computational tasks into comprehensible chunks (represented as functions and
* classes) and name those. Such functions then provide the basic vocabulary of
* computation, just as the types (built-in and user-defined) provide the basic
* vocabulary of data.
*
* The number of errors in code correlates strongly with the amount of code and
* the complexity of the code. Both problems can be addressed by using more and
* shorter functions. Using a function to do a specific task often saves us from
* writing a specific piece of code in the middle of other code; making it a
* function forces us to name the activity and document its dependencies.
*/

#include <iostream>

int square(int num);
float square(float num);

int main(void)
{
	int num = 5;
	float num2 = 10.45;

	/* Function overloading. */
	std::cout << "Square of " << num << " is: " << square(num) << "\n";
	std::cout << "Square of " << num2 << " is: " << square(num2) << "\n";

	return 0;
}

int square(int num)
{
	return num * num;
}

float square(float num)
{
	return num * num;
}
