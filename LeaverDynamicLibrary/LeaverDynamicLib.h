#pragma once
#include <string>

#ifdef LEAVERDYNAMICLIBRARY_EXPORTS
#define LEAVERDYNAMICLIB_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIB_API __declspec(dllimport)
#endif

class Leaver
{
public:
	LEAVERDYNAMICLIB_API void  leave(std::string str);
};
