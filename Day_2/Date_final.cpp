#include<cstdio>

class Date
{
   private:
      int day;
      int month;
      int year;
  
   public:
      // constructor not delibartely written
      
      void init_date(int init_day,int init_month,int init_year)
      {
         this->day = init_day;
         this->month = init_month;
         this->year = init_year;
      }
      
      int get_day()
      {
        return this->day;
      }
      
      int get_month()
      {
         return this->month;
      }
      
      int get_year()
      {
         return this->year;
      }

      void set_day(int new_day)
      {
         this->day = new_day;
      }
      
      void set_month(int new_month)
      {
         this->month = new_month;
      }
      
      void set_year(int new_year)
      {
         this->year = new_year;
      }
      
      void show()
      {
         printf("%d-%d-%d\n",this->day,this->month,this->year);
      }
};

int main(void)
{
   Date today;
  
   today.init_date(15,6,2024);      //Date :: init_date(&todya ,15,6,2024)
   today.show();
 
   today.set_day(16);               // Date :: set_day(&today,16)
   today.set_month(6);              // Date :: set_month(&today,06)
   today.set_year(2024);            // Date :: set_year(&today,2024)
   today.show();                    // Date :: show(&today)              
   
  // today.day;
  // today.month;
  // today.year;
  
   return(0);
}
