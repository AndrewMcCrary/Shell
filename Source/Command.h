//
// Command.h
//

// Constructor of the class parses a raw string into
// the various aspects of the command class.

#pragma once
#include <vector>
#include <iostream>
#include "split.h"

#ifndef FLAG_SEPARATOR
#define FLAG_SEPARATOR '-'
#endif // !FLAG_SEPARATOR



using namespace std;


class Command
{
private:
	string cmd;
	string cmd_args;
	vector<string> flags;


public:

	Command(std::string str) {
		
		


	}
};
