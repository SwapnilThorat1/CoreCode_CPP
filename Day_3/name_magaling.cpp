#include<iostream>

void Test_func(int a,int b)
{
   
}

int Test_func(short a,int b,int c)
{
   return a+b+c;
}

float Test_func(float a,float b)
{
   return a+b;
}

int main(void)
{
   Test_func(10,20);
   Test_func(10,11,21);
   Test_func(1.4f,5.6f);
   
   return(0);
}
  
