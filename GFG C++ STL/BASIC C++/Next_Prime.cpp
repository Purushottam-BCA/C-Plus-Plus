// CPP program to print the Next Prime
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

// Function to find the next prime
int Nextprime(int n)
{
	int res = -1;
	for (int i = n + 1; i < MAX_SIZE; i++)
   {
		if (prime[i]) // If match then return
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
	int n;
	cin>>n;
   cout << Nextprime(n); // Print the next prime
	return 0;
}
