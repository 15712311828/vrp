#ifndef TRAVELLER_H
#define TRAVELLER_H

#include "Point.h"

class Traveller
{
  public:
    Traveller(shared_ptr<Point> point,int peopleNum);
    virtual ~Traveller();

    shared_ptr<Point> getTarget();
    int getPeopleNum();

  protected:

  private:
    shared_ptr<Point> target;
    int num;
};

#endif // TRAVELLER_H
