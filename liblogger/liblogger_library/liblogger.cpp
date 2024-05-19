#include "liblogger.hpp"
using namespace liblogger;
void liblogger::printf_withloglevel(const char* txt, liblogger::LogLevel log_Level) {
	switch (log_Level) 
	{
		case LogLevel::Success:
		{
			printf("[SUCCESS] %s", txt);
			break;
		}
		case LogLevel::Failed:
		{
			printf("[FAILED] %s", txt);
			break;
		}
		case LogLevel::Unknown:
		{
			printf("[UNKNOWN ERROR] %s", txt);
			break;
		}
		case LogLevel::Warning:
		{
			printf("[WARNING] %s", txt);
			break;
		}
	}
		

}
