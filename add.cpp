#include<iostream>
using namespace std;
int add(int arg_x, int arg_y)
{
  return arg_x + arg_y;
}
int main()
{
  int x=5;
  int y=7;
  int z= add(x,y);
  cout<<x<<" + "<<y<<" = "<<z<<endl;
  
  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;

  return 0;

}
