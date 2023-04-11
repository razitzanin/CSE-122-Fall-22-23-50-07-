#include<iostream>
#include <utility>
using namespace std;

class publication
{
  public:
      string title;
      float price;
      void getData()
      {
          cout<< "Enter title and price: ";
          cin>>title>>price;
      }
      void putData()
      {
          cout<<"The title is: "<<title<<"\n"<<"The price is: "<< price<<endl;
      }
};
class book:public publication
{
    public:
    int pagecount;
   void getData()
      {
          cout<< "Enter pagecount: "<<endl;
          cin>>pagecount;
      }
      void putData()
      {
          cout<<"The pagecount is: "<<pagecount<<endl;
      }
};
class tape:public publication
{
    public:
    float playingtimeinminutes;
    void getData()
      {
          cout<< "Enter playingtime: ";
          cin>>playingtimeinminutes;
      }
      void putData()
      {
          cout<<"The playingtime is: "<<playingtimeinminutes;
      }
};
int main()
{
    book obj1;
    tape obj2;
    obj1.getData();
    obj1.putData();
    obj2.getData();
    obj2.putData();

}
