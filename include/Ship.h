#ifndef SHIP_H
#define SHIP_H

#include <memory>
#include <Point.h>
#include <vector>
#include "Traveller.h"
using namespace std;

class Ship
{
  public:
    Ship(int maxSize);
    bool addTraveller(shared_ptr<Traveller> traveller);
    void removeTraveller(int id);
    float getDistance();
    vector<shared_ptr<Traveller>> getTravellers();
    virtual ~Ship();
  protected:

  private:
    int maxSize;
    int currentNum;
    vector<shared_ptr<Traveller>> travellers;
    float distance;

};

#endif // SHIP_H
