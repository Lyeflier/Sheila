#pragma once

#ifdef SH_PLATFORM_WINDOWS

	#ifdef SH_BUILD_DLL
		#define SHEILA_API __declspec(dllexport)
	#else
		#define SHEILA_API __declspec(dllimport)
	#endif
#else
	#error Sheila only supports Windows!

#endif
