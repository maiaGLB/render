#define NOMINMAX

#include "Cursor.h"

Cursor::Cursor(int vX, int vY)
{
	x = vX;
	y = vY;
}

void Cursor::fixPosition(int maxWidth, int maxHeight)
{
	y = std::min(y, maxHeight - 1);
	y = std::max(y, 0);

	x = std::min(x, maxWidth - 1);
	x = std::max(x, 0);
}