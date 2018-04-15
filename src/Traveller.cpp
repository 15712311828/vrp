#include "Traveller.h"

Traveller::Traveller(shared_ptr<Point> point,int peopleNum)
{
  this->target=point;
  this->num=peopleNum;
}

shared_ptr<Point> Traveller::getTarget(){
  return target;
}

int Traveller::getPeopleNum(){
  return num;
}

Traveller::~Traveller()
{

}
