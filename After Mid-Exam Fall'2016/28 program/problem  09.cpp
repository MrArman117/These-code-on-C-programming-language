///Problem number 9
/*Write the definition for a class called Distance that has data member feet as integer  and inches as
float. The class has the following member functions:
void set(int, float) to give value to object
void disp() to display distance in feet and inches
Distance add(Distance) to sum two distances & return distance
1. Write the definitions for each of the above member functions.
2. Write main function to create three Distance objects. Set the value in two objects and call add()
 to calculate sum and assign it in third object. Display all distances.*/
#include<iostream>
using namespace std;
class Distance
{
   private:
 int feet;
 float inches;
   public:
 void setdist(int ft, float in)
 {
  feet=ft; inches=in;
 }
 Distance add(Distance);
 void disp();
};

Distance Distance::add(Distance D)
{
 Distance t;
 t.inches=inches + D.inches;
 t.feet =0;
 if(t.inches>=12.0)
 {
  t.inches-=12.0;
  t.feet++;
 }
 t.feet +=feet + D.feet;
 return t;
}
void Distance::disp()
{
 cout<<feet<<"\'"<<inches<<"\" ";
}
int main()
{
 Distance d1,d2,d3;
 d1.setdist(10,7.1);
 d2.setdist(23,5.5);
 d3=d1.add(d2);
 cout<<"\n distance 1 = ";d1.disp();
 cout<<"\n distance 2 = ";d2.disp();
 cout<<"\n distance 3 = ";d3.disp();
 return 0;
}
