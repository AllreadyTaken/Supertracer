#pragma once


#include<cmath>
#include<array>
#include <stdio.h>

namespace SuperMath
{
  struct Point3
  {
  public:
    float m_x, m_y, m_z;
    Point3(float x, float y, float z);
    Point3();
  };

  struct Vector3
  {
  public:
    float m_x, m_y, m_z;

    Vector3();
    Vector3(float x, float y, float z);
    Vector3(Point3 start, Point3 end);

    inline Vector3& operator+=(const Vector3& rhs)
    {
      m_x += rhs.m_x;
      m_y += rhs.m_y;
      m_z += rhs.m_z;
      return *this;
    }
    inline Vector3& operator-=(const Vector3& rhs)
    {
      m_x -= rhs.m_x;
      m_y -= rhs.m_y;
      m_z -= rhs.m_z;
      return *this;
    }
    inline Vector3& operator*= (const float& rhs)
    {
      m_x *= rhs;
      m_y *= rhs;
      m_z *= rhs;
      return *this;
    }
    //Cross product
    inline Vector3 operator* (const Vector3& rhs);
    inline Vector3 operator+ (const Vector3& rhs);
    inline Vector3 operator- (const Vector3& rhs);

    float Dot(const Vector3& lhs, const Vector3& rhs);
    float Angle(const Vector3& lhs, const Vector3& rhs);
    float Length();
  };

  struct Matrix4x4 
  {
    std::array<float, 16> m_values = {
      1.0f,0.0f,0.0f,0.0f,
      0.0f,1.0f,0.0f,0.0f,
      0.0f,0.0f,1.0f,0.0f,
      0.0f,0.0f,0.0f,1.0f
    };
    Matrix4x4();
    Matrix4x4(const std::array<float,16>& values);
  };

};
