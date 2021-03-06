#ifndef SRC_DATABASE_CLASSDATA_H_
#define SRC_DATABASE_CLASSDATA_H_

#include <iostream>
#include <vector>

#include "../abstracts/ACommand.h"
#include "../commands/Bash/Bash.h"
#include "../commands/Key/Key.h"
#include "../commands/SharePic/SharePic.h"
#include "../commands/Shortcut/Shortcut.h"
#include "../commands/Help/Help.h"

static std::vector<ACommand*> command_list = {new Bash, new Key, new SharePic, new Shortcut, new Help};

#endif