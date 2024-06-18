#include<iostream>

class Date
{
   private:
        int day,month,year;
   public:
        Date()
        {
           std::cout <<"In defualt constructor" << std::endl;      
        }

        Date(int init_day,int init_month,int init_year)
        {
  	   std::cout<< "In paramerarised constructor"<<std::endl;
           day = init_day;
           month = init_month;
           year = init_year;
        }        
};

int main(void)
{
   Date d;
   Date* p_date = new Date(18,6,2024);
  
   delete p_date;
   p_date = NULL;
   
   return(0);
}
