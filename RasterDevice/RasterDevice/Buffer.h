#pragma once
#include <memory>

enum BufferType
{
	BT_POINT,
	BT_IMAGE
};

class Buffer
{
	BufferType _type;
	void* _listElements;
	int _amountElements;
	int _sizeElements;

public:

	Buffer()
	{
		_listElements = nullptr;
		_amountElements = 0;
		_sizeElements = 0;
		_type = BT_POINT;
	}
	
	Buffer( const Buffer& b)
	{
		_type = b._type;
		_amountElements = b._amountElements;
		_sizeElements = b._sizeElements;
		
		int sizeTotal = _amountElements * _sizeElements;
		_listElements = malloc(sizeTotal);

		memcpy(_listElements, b._listElements, sizeTotal);
	}

	void resize(int amount, int size)
	{
		int sizeTempTotal = amount * size;
		int sizeTotal = _amountElements * _sizeElements;

		if (sizeTotal < sizeTempTotal)
		{
			if (_listElements)
			{
				free(_listElements);
				_listElements = nullptr;
			}
			_listElements = malloc(sizeTempTotal);
		}

		_amountElements = amount;
		_sizeElements = size;
	}

	void write(void* list, int amount, int size, BufferType type)
	{
		_type = type;
		int sizeTempTotal = amount * size;
		
		resize(amount, size);
		memcpy( _listElements, list, sizeTempTotal );
	}

	void* getElements( )
	{
		return _listElements;
	}

	int getAmount()
	{
		return _amountElements;
	}

};
