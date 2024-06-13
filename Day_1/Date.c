#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

struct Date
{
  int day;
  int month;
  int year;
};

int main(void)
{
   /* Step 1-->define a pointer to struct Date  */
   struct Date* p_date = NULL;
  
   /* Step 2 --> allocate struct Date instance in memory and store its's base in p_date  */
   p_date = (struct Date*)malloc(sizeof(struct Date));
   if(p_date == NULL)
   {
     puts("Failed to allocate memory for Date instance");
     exit(EXIT_FAILURE);
   }
   
   /* Step 3 --> Initialize by 0 */
   memset(p_date,0,sizeof(struct Date));
  
   /*Step 4 --> read write */
   p_date->day = 13;
   p_date->month = 6;
   p_date->year = 2024;
   
   /* Step 5 -->*/
   printf("%d-%d-%d\n",p_date->day,p_date->month,p_date->year);
   
   /* Step 6 --> Release Pointer*/
   free(p_date);
   
   /* Make pointer NULL */
   p_date = NULL;
   
   exit(EXIT_SUCCESS);
}

/*
------------------------
      
      Output 
     13-6-2024

------------------------
*/
