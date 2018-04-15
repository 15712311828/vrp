#ifndef POINT_H
#define POINT_H

#include <memory>
using namespace std;

class Point
{
  public:
    Point(float x,float y);
    virtual ~Point();

    float distance(Point * p);
    float distance(shared_ptr<Point> p);

    static shared_ptr<Point> ZERO;

    float getX() { return x; }
    void setX(float val) { x = val; }
    float getY() { return y; }
    void setY(float val) { y = val; }

  protected:

  private:
    float x;
    float y;
};

#endif // POINT_H
