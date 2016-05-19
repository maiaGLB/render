#include "Vector.h"

SVector2D::SVector2D()
{
	x = 0;
	z = 0;
}

SVector2D::SVector2D(int vX, int vZ)
{
	x = vX;
	z = vZ;
}

bool SVector2D::operator == (SVector2D v)
{
	return (x == v.x && z == v.z);
}