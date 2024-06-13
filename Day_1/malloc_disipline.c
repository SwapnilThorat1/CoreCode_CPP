#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
 //Step 1 --> Declare a pointer to apporpriate type
 int* p = NULL;
 
 //Step 2 --> Allocate memory and store base address in pointer
 p =(int*) malloc(sizeof(int));
 
 //Step 3 --> Initialize to zero
  memset(p,0,sizeof(int));
  
 //step 4 ---> Read/write
 *p = 500;
  printf("*p= %d\n",*p);
  
 //step 5 --->Release Pointer
  free(p);
 
 //step 6 --> Make pointer NULL;
  p = NULL;
   
  exit(EXIT_SUCCESS);
}

/*
Malloc Function 
which accepts sizeof interger and returns 
base address of newly allocated memory block

void* malloc(unsigned int);

-------------------------------
      output
 *p= 500
-------------------------------
*/
