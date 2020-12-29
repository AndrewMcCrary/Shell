//
// Command.h
//

// Constructor of the class parses a raw string into
// the various aspects of the command class.

#pragma once
#include <vector>	

using namespace std;

class Command
{
private:

	const char* cmd;
	vector<char*> flags;

public:

	Command(const char* str) {

	}
};
