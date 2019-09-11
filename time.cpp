#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter time in seconds"<<endl;
  cin>>a;
  int min;
  min=(a/60);
  b=a%60;
  cout<<"time in minutes is "<<min<<" min "<<b<<" s "<<endl;
  int hour;
  hour = (a/3600);
  a=a%3600;
  min=(a/60);
  b=a%60;
  cout<<"time in hours is "<<hour<<" hours "<<min<<" min "<<b<<" s  "<<endl;
}
