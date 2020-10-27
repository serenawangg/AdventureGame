#include<iostream>
#include"group02.h"
using namespace std;
int main()
{
  int scares=5;
  if (scares==0)
  {
    cout <<"You lost" << endl;
  }
  Hero protagonist;
  protagonist=kfreeves(protagonist);
  protagonist=swang(protagonist);
  protagonist=bcalderon6(protagonist);
  return 0;
}
