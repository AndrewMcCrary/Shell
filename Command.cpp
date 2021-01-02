//
// Command.cpp
//
//

#include "Command.h"

using namespace std;

Command::Command(string str) {
	CmdFlg = split(str, FLAG_SEPARATOR);

	for (int i = 0; i < CmdFlg.size(); i++) {
		Total[i] = split(CmdFlg[i], SPACE);
	}




}
