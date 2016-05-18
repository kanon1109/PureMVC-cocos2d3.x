#ifndef __VIEW_COMMAND__
#define __VIEW_COMMAND__
#include "Command.h"
class ViewCommand:public Command
{
public:
	ViewCommand(void);
	~ViewCommand(void);

	//************************************
	// Method:    execute	执行
	// Parameter: Notification notification	 消息体
	// Returns:   void
	//************************************
	void virtual execute(Notification* notification);
};
#endif
