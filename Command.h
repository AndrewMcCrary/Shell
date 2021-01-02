//
// Command.h
//
//

#ifndef COMMAND_H
#define COMMAND_H

#include <vector>
#include <iostream>
#include "split.h"

#define FLAG_SEPARATOR '-'
#define SPACE ' '

class Command {
private:
	std::vector<std::string> CmdFlg;				// Vector separated by the flag separator
	std::vector<std::vector<std::string>> Total;

	// [0] Command, args,...
	// [1] Flag1, args,...
	// [2] Flag2, args,...
	// ...

public:
	Command(std::string str);

};

#endif // !COMMAND_H