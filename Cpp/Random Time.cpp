#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	/** Random Tan�mlama Time Tan�mlama**/
	srand(time(NULL));
	cout << rand() % 100;
}