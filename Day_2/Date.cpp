#include<cstdio>

struct Test_1
{
  int mem1;
  int mem2;
};

class Test_1
{
  int mem1;
  int mem2;
};

void f();
void g();

int main(void)
{
  f();
  g(); 
  return(0);
}

void f()
{
  struct Test_1 inT1;
  struct Test_2* p_Test1 = NULL;
  inT1.mem1= 100;
  inT2.mem2 = 200;
 
  p_Test1 = (struct Test_1*)malloc(sizeof(struct Test_1));
  p_Test1->mem1 = 500;
  p_Test1->mem2 = 600;
  
  free(p_Test);
  p_Test1 = NULL;
}

void g()
{
  Test_2 objT2;
  Test_2* p_Test2 = new Test_2;
  
  objT2.mem1 = 100;
  objT2.mem2 = 200;
  p_Test2->mem1 = 300;
  p_Test2->mem2 = 400;
}
