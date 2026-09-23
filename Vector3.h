#include <iostream>

class Vector3{
 public:
  Vector3(double x=0, double y=0, double z=0):m_v{x,y,z}{};
  Vector3 operator+(const Vector3&) const;
  Vector3 operator-() const;
  Vector3 operator*(double) const;
  double X() const;
  double Y() const;
  double Z() const;
  void X(double);
  void Y(double);
  void Z(double);
 private:
  double m_v[3];
};

Vector3 operator*(double f, const Vector3& a);
std::ostream& operator<<(std::ostream& output, const Vector3& a);
std::istream& operator>>(std::istream& input, Vector3& a);
