#include "Vector.h"

SVector4Df::SVector4Df(float vX, float vY, float vZ, float vW)
{
	x = vX;
	y = vY;
	z = vZ;
	w = vW;
}

SVector4Df::SVector4Df(int vX, int vY, int vZ, int vW)
{
	x = (float)vX;
	y = (float)vY;
	z = (float)vZ;
	w = (float)vW;
}

SVector4Df SVector4Df::operator * (SMatrix& m)
{
	SVector4Df r;

	r.x = (m._11 * x) + (m._21 * y) + (m._31 * z) + (m._41 * w);
	r.y = (m._12 * x) + (m._22 * y) + (m._32 * z) + (m._42 * w);
	r.z = (m._13 * x) + (m._23 * y) + (m._33 * z) + (m._43 * w);
	r.w = (m._14 * x) + (m._24 * y) + (m._34 * z) + (m._44 * w);

	return r;
}