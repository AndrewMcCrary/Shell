//
// Command.h
//

// Constructor of the class parses a raw string into
// the various aspects of the command class.


#ifndef COMMAND_H
#define COMMAND_H

#include <vector>
#include <iostream>
#include "split.h"

#define FLAG_SEPARATOR '-'

class Command
{
private:
	vector<string> Total;

public:

	Command(string str);

};

#endif // !COMMAND_H