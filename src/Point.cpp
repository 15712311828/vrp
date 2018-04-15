#include "Point.h"
#include <cmath>


shared_ptr<Point> Point::ZERO=make_shared<Point>(0.f,0.f);

Point::Point(float x,float y)
{
  this->x=x;
  this->y=y;
}

float Point::distance(Point * p){
  return sqrt((x-p->getX())*(x-p->getX())+(y-p->getY())*(y-p->getY()));
}

float Point::distance(shared_ptr<Point> p){
  return sqrt((x-p->getX())*(x-p->getX())+(y-p->getY())*(y-p->getY()));
}


Point::~Point()
{

}
