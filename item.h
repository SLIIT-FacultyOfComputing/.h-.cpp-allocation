class Item{
 private:
  int Itemcode;
  char name[20];
  int price;
 public:
  void setItemDetails(int itemcode,char iname[]);
  void setPrice(int price);
  int getItemcode();
  int getItemprice();
};
