#include <iostream>
#include <cstring>
#include "item.h"
using namespace std;
void Item::setItemDetails(int i, char iname[])
{
  Itemcode=i;
  strcpy(name,iname);
}
void Item::setPrice(int p)
{
  p=price;
}
int Item::getItemcode()
{
  return Itemcode;
}
int Item::getItemprice()
{
  return price;
}
