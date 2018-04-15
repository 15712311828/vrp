#include <iostream>

#include "Traveller.h"
#include "Ship.h"
#include "Point.h"
#include <memory>
#include <iostream>

using namespace std;

int main()
{
    //��ʼ��һ����СΪ3�Ĵ�
    Ship * ship=new Ship(3);

    //�½��ÿ� Ŀ��λ��1,0 ������
    shared_ptr<Traveller> t1=make_shared<Traveller>(make_shared<Point>(1,0),2);
    ship->addTraveller(t1);
    cout<<ship->getDistance()<<endl;

    //�½��ÿ� Ŀ��λ��1,1 ��һ��
    shared_ptr<Traveller> t2=make_shared<Traveller>(make_shared<Point>(1,1),1);
    ship->addTraveller(t2);
    cout<<ship->getDistance()<<endl;

    //�½��ÿ� Ŀ��λ��5,5 ������ ��Ϊ��Ա���Բ�����ӳɹ�
    shared_ptr<Traveller> t3=make_shared<Traveller>(make_shared<Point>(5,5),2);
    ship->addTraveller(t3);
    cout<<ship->getDistance()<<endl;

    //�Ƴ���һ�μ�����οͣ�0��Ӧ��һ�� 1��Ӧ�ڶ��Σ�
    ship->removeTraveller(0);
    cout<<ship->getDistance()<<endl;

    while(1);
}
