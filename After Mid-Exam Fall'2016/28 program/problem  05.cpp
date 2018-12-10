///Problem number 5
/* Write a program to create a class shape with functions to find area of the shapes and display the name of
the shape and other essential component of the class. Create derived classes circle, rectangle and trapezoid
each having overridden functions area and display. Write a suitable program to illustrate virtual
functions and virtual destructor.*/
#include<iostream>
#include<cmath>
using namespace std;
class shape
{
 protected:
  float length, breadth, ar;
 public:
  shape():length(0), breadth(0){}
  shape(float len, float br):length(len), breadth(br) {}
  virtual void area()
  {
    ar =  length * breadth;
  }
  virtual void display()
  {
    cout<<"The required area is: "<<ar ;
  }
  virtual ~shape()
  {
    cout<<"\nDestructor from Base class shape";
  }
};
class rectangle : public shape
{
public:
  rectangle(){}
  rectangle(float len, float br):shape(len, br){};  /***explicit call to base class constructor***/
  void area()
  {
    ar = length * breadth;
  }
  void display()
  {
    cout<<"\n The area of rectangle is: "<<ar;
  }
  ~rectangle()
  {
    cout<<"\n Destructor from Derived class rectangle";
  }
};
class circle : public shape
{
private:
  float radius;
public:
  circle():radius(0.0){}
  circle( float rad):radius(rad){}
  void area()
  {
   ar = 3.1436 * radius * radius;
  }
  void display()
  {
   cout<<"\nThe area of circle is: "<<ar;
  }
  ~circle()
  {
    cout<<"\n Donstructor from derived class Circle ";
  }
};
class trapazoid : public shape
{
private:
  float l1, l2, h;
 public:
  trapazoid():l1(0),l2(0),h(0){}
  trapazoid(float l11 = 0.0, float l22 = 0.0, float h1 = 0.0):l1(l11), l2(l22), h(h1){}
  void area()
  {
   ar = ((1/2.0)*(l1+l2))*h;
  }
  void display()
  {
   cout<<"\nThe area of Trapazoid is: "<<ar;
  }
  ~trapazoid()
  {
    cout<<"\n Donstructor from derived class trapazoid";
  }
};
int main()
{
 shape *shp = new circle( 2.1);
 shp->area();
 shp->display();
 delete shp;
 shape *hel = new rectangle(2.2,4.6);
 hel->area();
 hel->display();
 delete hel;
 shape *d = new trapazoid( 3.6, 4.5, 2.1);
 d->area();
 d->display();
 delete d;
 return 0;
}
