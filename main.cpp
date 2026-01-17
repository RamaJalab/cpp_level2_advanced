#include <iostream>
using namespace std;
void readfun(int a[10])
{
  int i;
  for ( i = 0; i < 10; i++)
  {
cout<<"Value of a  " <<i+1<<endl;
cin>>a[i];
    /* code */
  }
}
void writefun(int a[10])
{
  int i;
  for (i = 0; i< 10; i++)
  {

cout << "value of a  " <<i+1<< " = " << a[i]<<endl;
    /* code */  
  }
}
int main()
{
int a[10];
readfun(a);
writefun(a);
   
    /* code */
    return 0;
}
