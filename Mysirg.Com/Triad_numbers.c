/*
The triad numbers is a set of three numbers which satisfy the following condition:

1. Each number must be a 3 digit number
2. All the digits in the numbers must be unique.
3. The second number must be twice the first number and the third number must be thrice the first.
*/
#include<stdio.h>
int main()
{
   int d1, d2, d3, tmp,n;
	scanf("%d",&n);
    for (int num = 192; num <= 333; num++)
      if(n!=0)
      {
        for (int i = num; i <= num * 3; i += num)  // Select Number which has unique digits
        {
            tmp = i;          d1 = tmp % 10;
            tmp = tmp / 10;   d2 = tmp % 10;
            tmp = tmp / 10;   d3 = tmp % 10;
            if (d1 == d2 || d2 == d3 || d3 == d1)
                goto next;
        }
        for (int a = num; a > 0; a /= 10) // check whether the given three numbers have unique digits or not
        {
            d1 = a % 10;
            for (int b = num * 2; b > 0; b /= 10)
            {
                d2 = b % 10;
                for (int c = num * 3; c > 0; c /= 10)
                {
                    d3 = c % 10;
                    if (d1 == d2 || d2 == d3 || d3 == d1)
                        goto next;
                }
            }
        }
        printf("%d %d %d\n", num, num * 2, num * 3);
        n--;
        next:;
      }
    return 0;
}
