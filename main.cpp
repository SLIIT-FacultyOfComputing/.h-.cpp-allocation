#include <iostream>
#include <cstring>
#include "item.h"
using namespace std;

int main() 
{
  Item i1;

  int i;
  char name[20];
  int price;

  cout<<"Enter itemcode";
  cin>>i;
  cout<<"Enter item name";
  cin>>name;
  cout<<"Enter item price";
  cin>>price;

  i1.setItemDetails(i,name);
  i1.setPrice(price);

  cout<<"Item code is "<<i1.getItemcode()<<endl;
  cout<<"Item price is "<<i1.getItemprice()<<endl;

  return 0;
}