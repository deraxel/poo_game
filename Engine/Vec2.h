#pragma once

class Vec2{
private:
public:
	Vec2()=default;
	Vec2(float x_in,float y_in);
	void setPos(float const xIn,float const yIn);
	Vec2 operator+(const Vec2& rhs) const;// lhs+rhs
	Vec2& operator+=(const Vec2& rhs) ;// lhs+rhs
	Vec2 operator*(float rhs) const;
	Vec2& operator*=(float rhs);
	Vec2 operator-(const Vec2& rhs) const;
	float operator->*(const Vec2& rhs);
	float getLength(const Vec2& lhs,const Vec2& rhs);
	float getLength(const Vec2& rhs);
	float getLength() const;
	void Normalize();
	Vec2 GetNormalized() const;
	void changeNormDir(const Vec2& rhs);
	Vec2 getNormDir(const Vec2& rhs)const;
	float x;
	float y;
};