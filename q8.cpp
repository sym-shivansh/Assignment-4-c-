#include <iostream>
using namespace std;
int main()
{
  int a;
cout<<"enter a number:";
cin>>a;
if (a%5==0 && a%11==0)
{cout<<"number is divisible by both 5 & 11";}
else
{cout<<"number is not divisible by both 5 & 11";}
return 0;
}
