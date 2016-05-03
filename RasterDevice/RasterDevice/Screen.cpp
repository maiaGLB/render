#include "Screen.h"

Screen::Screen()
{
	_settingsVP.load();
	_backBufferHeight = _settingsVP.getScreenHeight();
	_backBufferWidth = _settingsVP.getScreenWidth();

	_pixels = (char*)malloc(_backBufferHeight * _backBufferWidth);
}

Screen::~Screen()
{
	if (_pixels)
		free(_pixels);
}

//**************************
// encapsulamiento

int Screen::getBackBufferWidth()
{
	return _backBufferWidth;
}

int Screen::getBackBufferHeight()
{
	return _backBufferHeight;
}

char* Screen::getPixels()
{
	return _pixels;
}

Camera& Screen::getCamera()
{
	return _camera;
}