#pragma once
#include "Buffer.h"

class Image
{
	int _height;
	int _width;
	Buffer* _buffer;

public:
	Image( int width, int height, uint32_t* pixels )
	{
		_height = height;
		_width = width;
		_buffer = new Buffer();

		int amount = _height * _width;
		_buffer->write(pixels, amount, sizeof(uint32_t), BT_IMAGE);
	}

	Image(int width, int height)
	{
		_height = height;
		_width = width;

		resize(width, height);
	}

	void resize(int width, int height)
	{
		if ( _buffer == 0 )
			_buffer = new Buffer();

		int amount = _height * _width;
		_buffer->resize(amount, sizeof(uint32_t));
	}

	void write(uint32_t* pixels)
	{
		if ( _buffer == 0 )
			_buffer = new Buffer();
		
		int amount = _height * _width;
		_buffer->write(pixels, amount, sizeof(uint32_t), BT_IMAGE);
	}
};