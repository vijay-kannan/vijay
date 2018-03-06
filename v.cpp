#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a;
  cout<<"Enter value";
  cin>>a;
  if(a!=0)
  {
    if(a>0)
    {
      cout<<"Positive";
    }
    else
    {
      cout<<"Negative";
    }
  }
  else
    cout<<"Zero";
  getch();
}
      
