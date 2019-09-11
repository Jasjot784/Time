#include<bits/stdc++.h>
using namespace std;
int main()
{
  int h1,m1,s1;
  int h2,m2,s2;
  cout<<"enter first time "<<endl;
  cin>>h1>>m1>>s1;
  cout<<"enter 2nd time"<<endl;
  cin>>h2>>m2>>s2;
  int s=s1+s2;
  int m=m1+m2;
  int h=h1+h2;
  m=m+(s/60);
  h=h+(m/60);
  h=(h%12);
  cout<<"sum of times is "<<h<<" "<<m<<" "<<s<<endl;
}
