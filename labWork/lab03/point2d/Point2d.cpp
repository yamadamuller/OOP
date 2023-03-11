#include <cmath>
#include "Point2d.h"
#include <iomanip>

using namespace std;

Point2d::Point2d()
{
  x = 0;
  y = 0;
}

Point2d::Point2d(const Point2d &p)
{
  x = p.x;
  y = p.y;
}

Point2d::Point2d(double a, double b)
{
  x = a;
  y = b;
}

double Point2d::get_x() const
{
  return x;
}

double Point2d::get_y() const
{
  return y;
}

void Point2d::set_x(double p)
{
  x = p;
}

void Point2d::set_y(double p)
{
  y = p;
}

void Point2d::translate(const Point2d &t)
{
  x += t.get_x();
  y += t.get_y();
}

double Point2d::distance_to(const Point2d &p) const
{
  double dist, dist2_x, dist2_y;
  dist2_x = pow(p.get_x() - x,2);
  dist2_y = pow(p.get_y() - y,2);

  dist = sqrt(dist2_x + dist2_y);
  return dist;
}

int main()
{
  {
    Point2d a{1.0, 2.1};
    a.translate({-0.3, 0.5});
    cout << fixed << setprecision(2)
         << a.get_x() << ' ' << a.get_y() << '\n';
  } // -> 0.70 2.60

  {
    Point2d a{1.0, 2.1}, b{2.0, 3.1};
    cout << fixed << setprecision(2)
         << a.distance_to(b) << '\n';
  } // -> 1.41

  return 0;
}
