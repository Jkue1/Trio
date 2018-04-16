#include <iostream>
using namespace std;

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA
  
  if (blue < red)
  {
    swap (blue, red);
  }
  else if (blue < green)
  {
    swap (blue, green);
  }
  else if (green < red);
  {
    swap (green, red);
  }
  





  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
