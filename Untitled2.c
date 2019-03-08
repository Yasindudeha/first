#include<stdio.h>
double fact(double n);
int main()
{
    printf("recursive :%d",fact(50));

}
double fact(double n)
{
  if(n==0 || n==1)
  {
      return 1;
  }
  else
  {
  	return fact(n-1)*n;
  }
  }


