#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	/** Random Tanýmlama Time Tanýmlama**/
	srand(time(NULL));
	cout << rand() % 100;
}