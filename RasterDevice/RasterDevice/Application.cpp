#include "Application.h"
#include "ScreenConsole.h"
#include "ScreenGraphic.h"

Application::Application()
{
	_cursor = { 1,1 };
	_screen = nullptr;
}

Application::~Application()
{
	if (_screen)	
		delete(_screen);
}

void Application::init()
{
	ScreenConsole* _screenConsole = new ScreenConsole();
	_screenConsole->init();
	_screen = _screenConsole;

	load();
}

void Application::init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ScreenGraphic* _screenGraphic = new ScreenGraphic();
	_screenGraphic->init(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
	_screen = _screenGraphic;

	load();
}

void Application::load()
{
}

void Application::update()
{
	int _screenWidth = _screen->getBackBufferWidth();
	int _screenHeight = _screen->getBackBufferHeight();

	_screen->clear();
	
	// check the limit and fix the position
	_cursor.fixPosition(_screenWidth, _screenHeight);

	// draw the cursor
	_screen->getPixels()[_cursor.y * _screenWidth + _cursor.x] = '#';

	// draw the screen
	_screen->print();

	// this is necesary to don't see tearing. This happent because we don't write directly in the console
	Sleep(70);
}