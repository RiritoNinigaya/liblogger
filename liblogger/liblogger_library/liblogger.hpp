#pragma once

#include <iostream>
#include <Windows.h>

namespace liblogger 
{
	enum LogLevel : int
	{
		Warning = 1,
		Success = 2,
		Failed = 3,
		Unknown = 4
	};
	void printf_withloglevel(const char* txt, LogLevel log_Level);
}