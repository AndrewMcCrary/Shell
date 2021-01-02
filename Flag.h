//
// Flag.h
//

// Utilized by the command class

#pragma once
#ifndef _FLAG_START
#define _FLAG_START "-"
#endif // !_FLAG_START

#include <vector>	

struct flag
{
	const char* flag;
	const char* args;
};