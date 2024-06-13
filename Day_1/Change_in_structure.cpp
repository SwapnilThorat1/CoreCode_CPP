//server side structure declaration /definition is done only once

// S-v1
struct date
{
  int dd;
  int mm;
  int yy;
};

// struct definition is USED at varaious different places 

void f1(void)
{
  struct date d;
  d.dd = 21;
  d.mm = 12;
  d.yy = 2010;
}

struct date
{
  int day;
  int month;
  int year;
};

void f1(void)
{
  struct data d;
  d.dd = 21;
  d.mm = 12;
  d.yy = 2010;
}

