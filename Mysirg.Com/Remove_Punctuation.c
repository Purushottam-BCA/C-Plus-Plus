#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,n;
  char a[50];
  gets(a);
  for(i=0,j=0;i<strlen(a);i++)
  {
    if((a[i]>=65 && a[i]<=90)||(a[i]>=97 &&  a[i]<=122)||a[i]==' '||(a[i]>=48 && a[i]<=57))
      a[j++]=a[i];
  }
  a[j]='\0';
  puts(a);
  return 0;
}
