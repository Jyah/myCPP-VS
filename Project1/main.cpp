#include <iostream>
#include <math.h>
#include <sstream>
#include <stdio.h>
using namespace std;
/**
Project Euler - Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

void primeFactors(long long n)
{
	// Print the number of 2s that divide n 
	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n = n / 2;
	}

	// n must be odd at this point.  So we can skip  
	// one element (Note i = i +2) 
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n 
		while (n%i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
	}

	// This condition is to handle the case when n  
	// is a prime number greater than 2 
	if (n > 2)
		printf("%d ", n);
}

int main()
{
	long long N = 600851475143;
	primeFactors(N);
	system("pause");
	return 0;
}