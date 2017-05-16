#include "Vec2.h"
#include "math.h"

Vec2::Vec2(float x_in,float y_in)
	:
	x(x_in),
	y(y_in){

}

Vec2 Vec2::operator+(const Vec2& rhs) const{
	return Vec2(x+rhs.x,y+rhs.y);
}

Vec2& Vec2::operator+=(const Vec2& rhs) {
	return *this=*this+rhs;
}

Vec2 Vec2::operator*(float rhs) const{
	return Vec2(x*rhs,y*rhs);
}

Vec2& Vec2::operator*=(float rhs){
	return *this=*this*rhs;
}

Vec2 Vec2::operator-(const Vec2& rhs) const{
	return Vec2(x-rhs.x,y-rhs.y);
}

float Vec2::getLength(const Vec2& lhs,const Vec2& rhs){
	return sqrtf(((rhs.x-lhs.x)*(rhs.x-lhs.x))+
		((rhs.y-lhs.y)*(rhs.y-lhs.y)));
}

float Vec2::getLength() const{
	return sqrtf((x*x)+(y*y));
}

float Vec2::operator->*(const Vec2& rhs){
	return sqrtf(((rhs.x-x)*(rhs.x-x))+
		((rhs.y-y)*(rhs.y-y)));
}

float Vec2::getLength(const Vec2& rhs){
	return *this->*rhs;
}

void Vec2::Normalize(){
	*this=GetNormalized();
}

void Vec2::changeNormDir(const Vec2& rhs){
	*this=getNormDir(rhs);
}

Vec2 Vec2::getNormDir(const Vec2& rhs)const{
	Vec2 newVek(x-rhs.x,y-rhs.y);
	return newVek*(1/newVek.getLength());
}

Vec2 Vec2::GetNormalized() const{
	if(getLength()==0){
		return *this;
	}
	return *this*(1/getLength());
}

void Vec2::setPos(float const xIn,float const yIn){
	x=xIn;
	y=yIn;
}