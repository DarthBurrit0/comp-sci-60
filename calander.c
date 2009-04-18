#include <stdio.h>
main ()
{
int month_number;
int months_table_number;

/*enter month number (number 1-12)*/
printf("Type month number\n");
scanf("%d",&month_number);

/*processing*/
/**
* Processing the number of the week this month starts on, formula is
* found on: http://en.wikipedia.org/wiki/Calculating_the_day_of_the_week
*/
switch(month_number)
  {
case 1: months_table_number = 0;
case 2: months_table_number = 3;
case 3: months_table_number = 3;
case 4: months_table_number = 6;
case 5: months_table_number = 1;
case 6: months_table_number = 4;
case 7: months_table_number = 6;
case 8: months_table_number = 2;
case 9: months_table_number = 5;
case 10: months_table_number = 0;
case 11: months_table_number = 3;
case 12: months_table_number = 5;
  }
 
//table for day of the week calculation acquired from:
// / http://en.wikipedia.org/wiki/Calculating_the_day_of_the_week

/*output*/

printf("%d\n",months_table_number);
//printf("S\tM\tT\tW\tR\tF\tS\n");
}