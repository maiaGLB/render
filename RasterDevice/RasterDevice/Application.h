#pragma once
#include "Screen.h"
#include "Utils.h"
#include "Cursor.h"

struct Application
{
	Cursor _cursor;
	Screen* _screen;
	
	Application();
	~Application();

	void init();
	void init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);

	void load();
	void update();

};
