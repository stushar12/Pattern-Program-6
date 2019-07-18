#include <stdio.h>
int main()
{
char ch1='E';
char ch='E';
int n;
printf("\n Enter a number ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
  for(char j=ch;j>=ch1;j--)
  {
    printf("%c ",j);
  }
  ch1--;
  printf("\n");
}
}
