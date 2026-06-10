point.cpp

#include "point.h"
#include <cmath> 
#include <limits> // Добавили для использования std::numeric_limits

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
    // Использование встроенной константы машинного эпсилон
    const double EPS = std::numeric_limits<double>::epsilon();
    return (std::abs(this->x - p.x) < EPS && std::abs(this->y - p.y) < EPS);
}

bool Point::operator!=(const Point& p) const
{
    return !(*this == p);
}
