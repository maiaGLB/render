#include "Vector.h"

SVector3Df::SVector3Df(float vX, float vY, float vZ)
{
	x = vX;
	y = vY;
	z = vZ;
}

SVector3Df::SVector3Df(int vX, int vY, int vZ)
{
	x = (float)vX;
	y = (float)vY;
	z = (float)vZ;
}

SVector3Df SVector3Df::operator * (SMatrix& m)
{
	SVector3Df r;

	r.x = (m._11 * x) + (m._21 * y) + (m._31 * z) + (m._41 * 1);
	r.y = (m._12 * x) + (m._22 * y) + (m._32 * z) + (m._42 * 1);
	r.z = (m._13 * x) + (m._23 * y) + (m._33 * z) + (m._43 * 1);

	return r;
}