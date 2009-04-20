#include <stdio.h>
main ()
{
  int month_number;
  int months_table_number;
  int day_of_the_month;
  int day_of_the_week;
  int days_in_the_month;
  int step_5_number;
  int rows;

  /*enter month number (number 1-12)*/
  printf("Type month number\n");
  scanf("%d",&month_number);

  day_of_the_month = 1; // this will allways be 1 for now

  /**
  * Processing the number of the week this month starts on, formula is
  * found on: http://en.wikipedia.org/wiki/Calculating_the_day_of_the_week
  */
  switch(month_number){
      case 1:
        months_table_number = 0;
        days_in_the_month = 31;
        break;
      case 2:
        months_table_number = 3;
        days_in_the_month = 28;
        break;
      case 3:
        months_table_number = 3;
        days_in_the_month = 31;
        break;
      case 4:
        months_table_number = 6;
        days_in_the_month = 30;
        break;
      case 5:
        months_table_number = 1;
        days_in_the_month = 31;
        break;
      case 6:
        months_table_number = 4;
        days_in_the_month = 30;
        break;
      case 7:
        months_table_number = 6;
        days_in_the_month = 31;
        break;
      case 8:
        months_table_number = 2;
        days_in_the_month = 31;
        break;
      case 9:
        months_table_number = 5;
        days_in_the_month = 30;
        break;
      case 10:
        months_table_number = 0;
        days_in_the_month = 31;
        break;
      case 11:
        months_table_number = 3;
        days_in_the_month = 30;
        break;
      case 12:
        months_table_number = 5;
        days_in_the_month = 31;
        break;
  }
  
  // Step 5 from the wikipedia formula
  step_5_number = 6 + 9 + 2 + 1 + months_table_number;
  
  // and finally the day of the week
  day_of_the_week = step_5_number % 7;
  
  // how many rows we will need
  rows = (days_in_the_month + day_of_the_week) / 6;
  
  printf("month_number: %d\nmonths_table_number: %d\ndays_in_the_month: %d\nstep_5_number: %d\nday_of_the_week: %d\nrows: %d\n",month_number, months_table_number,days_in_the_month, step_5_number, day_of_the_week, rows);
  printf("%d\n", (days_in_the_month + day_of_the_week) -1);
  /**
   * Print out the calenadar
   */
  printf("Sun\tMon\tTues\tWeds\tThurs\tFri\tSat\n");
  
  // loop through each row, page 24 in book
  int i;  
  int output_day;
  for (i = 0; i <= (days_in_the_month + day_of_the_week); ++i) {
    output_day = ' '; // unset 
    if (i >= day_of_the_week && i <= (days_in_the_month + day_of_the_week)) {
      output_day = i - day_of_the_week + 1;
    }
   
    // this needs to be fixed it doesnt work for every month....the numbers will change when 1 starts on a different day
    printf("%d\t", output_day);
    if ( i == 6 || i == 13 || i == 20 || i == 27 || i == 34 || i == (days_in_the_month + day_of_the_week)) {
      printf("\n");
    }
  }
}
