#include <iostream>
using namespace std;
// void readfun(int a[2])
// {
//   int i;
//   for ( i = 0; i < 2; i++)
//   {
// cout<<"Value of a  " <<i+1<<endl;
// cin>>a[i];
//     /* code */
//   }
// }
// void writefun(int a[2])
// {
//   int i;
//   for (i = 0; i< 2; i++)
//   {

// cout << "value of a  " <<i+1<< " = " << a[i]<<endl;
//     /* code */  
//   }
// }

// int increase(int &s)
// {
//   return (s++);
// }
// int decrease(int &m)
// {
//   return (m--);
// }
int MySum(int a, int b)
{
int s = 0;
s = a + b;
return s;
}
int main()
{
  int arr1[5] = { 200,100,50,25,30 };
int a, b, c;
a = 10;
b = 20;
a++;
++b;
c = a + b;
cout << a << endl;
cout << b << endl;
cout << c << endl;
for (int i = 1; i <= 5; i++)
{
cout << i << endl;
a = a + a * i;
}
c = MySum(a, b);
cout << c;
//   int s=10;
//   int m=4;
//   int a[2];
// readfun(a);
// writefun(a);
// increase(s);
// decrease(m);
// cout<<"Value after increase s = " <<s<<endl;
// cout<<"Value after decrease m = " <<m<<endl;
   
    /* code */
    return 0;
}
