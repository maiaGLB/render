#pragma once
#include <string>
#include "Utils.h"

class SettingsViewPort
{
	std::string _filePath = "./";
	std::string _fileName = "settings.txt";
	std::string _fullPath = _filePath + _fileName;

	std::string _config = Utils::readTextFile(_fullPath.c_str());

	std::string _screenHeight = "";
	std::string _screenWidth = "";

public:

	void load();


	// encapsule

	std::string getFilePath();
	void setFilePath(std::string value);

	std::string getFileName();
	void setFileName(std::string value);

	std::string getFullPath();
	void setFullPath(std::string value);

	std::string getConfig();
	void setConfig(std::string value);
	
	int getScreenHeight();
	void setScreenHeight(std::string value);

	int getScreenWidth();
	void setScreenWidth(std::string value);
};
