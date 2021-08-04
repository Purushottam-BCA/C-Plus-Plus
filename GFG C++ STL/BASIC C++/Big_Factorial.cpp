// C++ program to compute factorial of big numbers
#include<iostream>
using namespace std;

// Maximum number of digits in output
#define MAX 200

int multiply(int x, int res[], int res_size);

// This function finds factorial of large numbers and prints them
void factorial(int n)
{
	int res[MAX];
	res[0] = 1;
	int res_size = 1; // Counter to count total digit in array
	for (int x=2; x<=n; x++)
		res_size = multiply(x, res, res_size);    // 2 a[] 1
	cout << "Factorial of given number is \n";
	for (int i=res_size-1; i>=0; i--)
		cout << res[i];
}
// This function multiplies x with the number represented by res[].
// res_size is size of res[] or number of digits in the res[].
int multiply(int x, int res[], int res_size) // 2  a[]  1
{
	int carry = 0; // Initialize carry
	for (int i=0; i<res_size; i++)   // 0 to 1-1
	{
		int prod = res[i] * x + carry; // 1*2+0=2
      // Store last digit of 'prod' in res[]
      res[i] = prod % 10;
		carry = prod/10;
	}

	while (carry)
	{
		res[res_size] = carry%10;
		carry = carry/10;
		res_size++;
	}
	return res_size;
}

int main()
{
	factorial(18);
	return 0;
}
