#pragma once
#include <algorithm>

struct Cursor
{
	int x;
	int y;

	Cursor() {}
	Cursor(int vX, int vY);

	void fixPosition(int maxWidth, int maxHeight);
};
