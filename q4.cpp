#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
   cout<<"enter three numbers"<<endl;
      cin>>a>>b>>c;

   if(a>b)
   {
     if(a>c)
       cout<<"a is greatest"<<endl;
   }
  else {
    if(b>c)
    {
      if(b>a)
        cout<<"b is greatest"<<endl;
    }
    else{
      cout<<"c is greatest";
    }
  }
  return 0;
}








  
