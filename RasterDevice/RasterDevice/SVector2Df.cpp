#include "Vector.h"

SVector2Df::SVector2Df(float vX, float vZ)
{
	x = vX;
	z = vZ;
}

SVector2Df::SVector2Df(int vX, int vZ)
{
	x = (float)vX;
	z = (float)vZ;
}

SVector2Df::SVector2Df(std::string vX, std::string vZ)
{
	x = std::stof(vX);
	z = std::stof(vZ);
}

float SVector2Df::sqlength()
{
	float sqlength = x*x + z*z;

	return sqlength;
}

float SVector2Df::lenght()
{
	float l = 0;
	float sql = sqlength();

	if (sql > 0)
		l = sqrt(sql);

	return l;
}

float SVector2Df::distance(SVector2Df p)
{
	SVector2Df vd = p - *this;
	float d = vd.lenght();

	return d;
}

SVector2Df SVector2Df::operator + (SVector2Df v)
{
	SVector2Df r;

	r.x = x + v.x;
	r.z = z + v.z;

	return r;
}

SVector2Df SVector2Df::operator - (SVector2Df v)
{
	SVector2Df r;

	r.x = x - v.x;
	r.z = z - v.z;

	return r;
}