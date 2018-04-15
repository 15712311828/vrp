#include "Ship.h"

Ship::Ship(int maxSize)
{
  this->distance=0;
  this->maxSize=maxSize;
  this->currentNum=0;
}

bool Ship::addTraveller(shared_ptr<Traveller> traveller){
  if(currentNum+traveller->getPeopleNum()>maxSize){
    return false;
  }
  if(travellers.empty()){
    distance=traveller->getTarget()->distance(Point::ZERO);
  }
  else{
    distance+=traveller->getTarget()->distance(travellers.back()->getTarget());
  }
  currentNum+=traveller->getPeopleNum();
  travellers.push_back(traveller);
  return true;
}

void Ship::removeTraveller(int id){
  if(id==0){
    distance-=travellers[0]->getTarget()->distance(Point::ZERO);
    distance-=travellers[1]->getTarget()->distance(travellers[0]->getTarget());
    distance+=travellers[1]->getTarget()->distance(Point::ZERO);
  }
  else if(id<travellers.size()-1){
    distance-=travellers[id+1]->getTarget()->distance(travellers[id]->getTarget());
    distance-=travellers[id]->getTarget()->distance(travellers[id-1]->getTarget());
    distance+=travellers[id+1]->getTarget()->distance(travellers[id-1]->getTarget());
  }
  else{
    distance-=travellers[id]->getTarget()->distance(travellers[id-1]->getTarget());
  }
  currentNum-=travellers[id]->getPeopleNum();
  travellers.erase(travellers.begin()+id);
}

float Ship::getDistance(){
  return distance+travellers.back()->getTarget()->distance(Point::ZERO);
}

vector<shared_ptr<Traveller>> Ship::getTravellers(){
  return travellers;
}

Ship::~Ship()
{

}
