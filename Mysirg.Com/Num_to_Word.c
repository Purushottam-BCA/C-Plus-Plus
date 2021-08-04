#include<stdio.h>
#include<math.h>
int main()
{
  int i=5,N,ch;
  scanf("%d",&N);
  while(--i>=0)
  {
    ch=N/(int)pow(10,i);
    switch(ch)
    {
      case 1:
        printf("ONE ");
       break;
      case 0:
        printf("ZERO ");
      break;
      case 2:
        printf("TWO ");
      break;
      case 3:
        printf("THREE ");
       break;
      case 4:
        printf("FOUR ");
      break;
      case 5:
        printf("FIVE ");
      break;
       case 6:
        printf("SIX ");
       break;
      case 7:
        printf("SEVEN ");
      break;
      case 8:
        printf("EIGHT ");
      break;
      case 9:
        printf("NINE ");
      break;
    }
    N=N%(int)pow(10,i);
  }
  return 0;
}
