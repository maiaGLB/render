#pragma once
#include <string>

struct SMatrix;

struct SVector2D
{
	int x;
	union
	{
		int z;
		int y;
	};

	SVector2D();
	SVector2D(int vX, int vZ);

	bool operator == (SVector2D v);
};

struct SVector2Df
{
	float x = 0;
	union
	{
		float z;
		float y;
	};

	SVector2Df() {}

	SVector2Df(float vX, float vZ);
	SVector2Df(int vX, int vZ);
	SVector2Df(std::string vX, std::string vZ);

	float sqlength();
	float lenght();
	float distance(SVector2Df p);

	SVector2Df operator + (SVector2Df v);
	SVector2Df operator - (SVector2Df v);
};

struct BoundingSquare
{
	SVector2Df _pointMin;
	SVector2Df _pointMax;
};


struct SVector3Df
{
	float x = 0;
	float z = 0;
	float y = 0;

	SVector3Df() {}

	SVector3Df(float vX, float vY, float vZ);
	SVector3Df(int vX, int vY, int vZ);

	SVector3Df operator * (SMatrix& m);
};

struct SVector4Df
{
	float x = 0;
	float z = 0;
	float y = 0;
	float w = 1;

	SVector4Df() {}
	SVector4Df(float vX, float vY, float vZ, float vW);
	SVector4Df(int vX, int vY, int vZ, int vW);

	SVector4Df operator * (SMatrix& m);
};

struct SMatrix
{
	float _11, _12, _13, _14;
	float _21, _22, _23, _24;
	float _31, _32, _33, _34;
	float _41, _42, _43, _44;
};