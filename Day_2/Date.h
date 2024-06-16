#ifdef _DATE_H
#define _DATE_H

struct Date
{
  int day;
  int month;
  int year;
  
  struct Date* create_date(){}
  void init_date(struct Date* p,int dd ,int mm,int yy){}
  int get_day(struct Date* p){}
  int get_month(struct Date* p){}
  int get_year(struct Date* p){}

// Helper function    
  void set_day(struct Date* p,int new_day){}
  void set_month(struct Date* p,int new_day){}
  void set_year(struct Date* p,int new_day){}
  void destroy_day(struct Date* p){}
};

#endif
