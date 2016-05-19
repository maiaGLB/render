#pragma once
#include "Image.h"
#include "Buffer.h"
#include "Vector.h"
#include <vector>

class RenderDevice 
{
	Image* target;

	RenderDevice()
	{
		target = nullptr;
	}

	void setTargetSize( int width, int height )
	{
		if ( target == 0 )
			target = new Image(width, height);
		else
			target->resize(width,height);
	}

	void renderBuffer(Buffer* b, SMatrix& m)
	{
		SVector3Df* vector3 = (SVector3Df*)b->getElements();
		int amount = b->getAmount();
		
		std::vector<SVector4Df> listVector4;
		
		for( int i = 0; i < amount; i++ )
		{
			SVector4Df vector4 = SVector4Df(vector3[i].x, vector3[i].y, vector3[i].z, 1.0);

			vector4 = vector4 * m;

			listVector4.push_back(vector4);
		}
	}
};
