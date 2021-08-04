// CPP program to print the Kth prime greater than N
#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1e6;  // set the MAX_SIZE of the array to 10^6
bool prime[MAX_SIZE + 1];  // initialize the prime array

void sieve()
{
	memset(prime, true, sizeof(prime));  // Initialy set all numbers as prime (true)
	for (int p = 2; p * p <= MAX_SIZE; p++)
		if (prime[p])
			for (int i = p; i*p <= MAX_SIZE; i += 1) // Now all multiples are false or composite
				prime[i*p] = false;
}

// Function to find the kth prime greater than n
int kthPrimeGreaterThanN(int n, int k)
{
	int res = -1;
	for (int i = n + 1; i < MAX_SIZE; i++)
   {
		if (prime[i]) // decrement k if i is prime
			k--;
		if (k == 0) // store the kth prime greater than n as soon as it found and break
      {
			res = i;
			break;
		}
	}
	return res;
}

int main()
{
	sieve();
	int n = 2, k = 15;
   cout << kthPrimeGreaterThanN(n, k); // Print the kth prime number greater than n
	return 0;
}
