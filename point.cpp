#include "point.h"
#include <cmath> 
Point::Point(const double x, const double y)
{
    this->x = x;
    this->y = y;
}
double Point::getX() const
{
    return this->x;
}
double Point::getY() const
{
    return this->y;
}
bool Point::operator==(const Point& p) const
{
    const double EPS = 1e-9;
    return (std::abs(this->x - p.x) < EPS && std::abs(this->y - p.y) < EPS);
}
bool Point::operator!=(const Point& p) const
{
    return !(*this == p);
}
