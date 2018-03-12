#include "SuperMath.h"

using namespace SuperMath;

Point3::Point3(float x, float y, float z)
{
  m_x = x;
  m_y = y;
  m_z = z;
}

Point3::Point3()
{
  m_x = 0.0f;
  m_y = 0.0f;
  m_z = 0.0f;
}

Vector3::Vector3()
{
  m_x = 0.0f;
  m_y = 0.0f;
  m_z = 0.0f;
}

Vector3::Vector3(float x, float y, float z)
{
  m_x = x;
  m_y = y;
  m_z = z;
}

Vector3::Vector3(Point3 start, Point3 end)
{
  m_x = end.m_x - start.m_x;
  m_y = end.m_y - start.m_y;
  m_z = end.m_z - start.m_z;
}

inline Vector3 Vector3::operator*(const Vector3 & rhs)
{
  float o_x = m_y*rhs.m_z - m_z*rhs.m_y;;
  float o_y = m_z*rhs.m_x - m_x*rhs.m_z;;
  float o_z = m_x*rhs.m_y - m_y*rhs.m_x;
  return Vector3(o_x, o_y, o_z);
}

inline Vector3 Vector3::operator+(const Vector3 & rhs)
{
  float o_x = m_x + rhs.m_x;
  float o_y = m_y + rhs.m_y;
  float o_z = m_z + rhs.m_z;
  return Vector3(o_x,o_y,o_z);
}

inline Vector3 SuperMath::Vector3::operator-(const Vector3 & rhs)
{
  float o_x = m_x - rhs.m_x;
  float o_y = m_y - rhs.m_y;
  float o_z = m_z - rhs.m_z;
  return Vector3(o_x, o_y, o_z);
}

float Vector3::Dot(const Vector3 & lhs, const Vector3 & rhs)
{
  float result =
    lhs.m_x*rhs.m_x +
    lhs.m_y*rhs.m_y +
    lhs.m_z*rhs.m_z;
  return result;
}

float Vector3::Angle(const Vector3 & lhs, const Vector3 & rhs)
{
  float cosalpha = Dot(lhs, rhs) / (lhs.Length * rhs.Length);
  float result = acos(cosalpha);
  return result;
}

Matrix4x4::Matrix4x4()
{
  //nothing to do
}

Matrix4x4::Matrix4x4(const std::array<float,16>& values)
{
  for (unsigned int ii = 0; ii < m_values.size(); ii++)
  {
    m_values[ii] = values[ii];
  }
}

