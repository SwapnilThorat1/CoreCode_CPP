//Function will be defined only once

//Server v1
void sort(int *a,int n)
{  
   int i;
   int j;
   int key;
   
   for(j= 1; j<n; j++)
   {
     key = a[j];
     i = j-1; 
     
     while(i>-1 && a[i] > key)
     {
       a[i+1] = a[i];
       i = i -1;
     }
     a[i+1] = key;
   }
}

void f1(void)
{
  int A1[N1] = sort(A1,N1);
}

void f2(void)
{
  int A2[N2] = {};
  sor(A2,N2);
}

void f3(void)
{
  int A3[N3];
  sort(A3,N3);
}

//Server V2
void sort(int *a,int n)
{
   //insertion sort
   //logic of quick_sort here
}

void f1(void)
{
  int A1[N1] = sort(A1,N1);
}

void f2(void)
{
  int A2[N2] = {};
  sort(A2,N2);
}

void f3(void)
{
  int A3[N3];
  sort(A3,N3);
}


