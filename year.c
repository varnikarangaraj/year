#include<stdio.h>
void main()
{
 int year;
 clrscr();
 printf("Enter a year:\n");
 scanf("%d", &year);
 if ( year%400 == 0)
 {
  printf("%d is not a leap year", year);
 }
 else if ( year%4 == 0 )
 {
  printf("%d is a leap year", year);
 }
 getch();
}
