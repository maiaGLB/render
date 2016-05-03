#include "SettingsViewPort.h"

void SettingsViewPort::load()
{
	size_t pos = 0;
	for (int x = 0; x < 6; x++)
	{
		pos = _config.find("\n");

		switch (x)
		{
		case 0:
			_screenHeight = _config.substr(0, pos);
			break;
		case 1:
			_screenWidth = _config.substr(0, pos);
			break;
		default:
			break;
		}

		_config = _config.substr(pos + 1);
	}
}

// *************************
// encapsule

std::string SettingsViewPort::getFilePath()
{
	return _filePath;
}
void SettingsViewPort::setFilePath(std::string value)
{
	_filePath = value;
}

std::string SettingsViewPort::getFileName()
{
	return _fileName;
}
void SettingsViewPort::setFileName(std::string value)
{
	_fileName = value;
}

std::string SettingsViewPort::getFullPath()
{
	return _fullPath;
}
void SettingsViewPort::setFullPath(std::string value)
{
	_fullPath = value;
}

std::string SettingsViewPort::getConfig()
{
	return _config;
}
void SettingsViewPort::setConfig(std::string value)
{
	_config = value;
}

int SettingsViewPort::getScreenHeight()
{
	int value = std::stoi(_screenHeight);
	return value;
}
void SettingsViewPort::setScreenHeight(std::string value)
{
	_screenHeight = value;
}

int SettingsViewPort::getScreenWidth()
{
	int value = std::stoi(_screenWidth);
	return value;
}
void SettingsViewPort::setScreenWidth(std::string value)
{
	_screenWidth = value;
}