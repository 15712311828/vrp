#include <iostream>

#include "Traveller.h"
#include "Ship.h"
#include "Point.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{
    //初始化一个大小为3的船
    Ship * ship=new Ship(3);

    //新建旅客 目标位置1,0 共两人
    shared_ptr<Traveller> t1=make_shared<Traveller>(make_shared<Point>(1,0),2);
    ship->addTraveller(t1);
    cout<<ship->getDistance()<<endl;

    //新建旅客 目标位置1,1 共一人
    shared_ptr<Traveller> t2=make_shared<Traveller>(make_shared<Point>(1,1),1);
    ship->addTraveller(t2);
    cout<<ship->getDistance()<<endl;

    //新建旅客 目标位置5,5 共五人 因为满员所以不能添加成功
    shared_ptr<Traveller> t3=make_shared<Traveller>(make_shared<Point>(5,5),2);
    ship->addTraveller(t3);
    cout<<ship->getDistance()<<endl;

    //移除第一次加入的游客（0对应第一次 1对应第二次）
    ship->removeTraveller(0);
    cout<<ship->getDistance()<<endl;

    while(1);
}
