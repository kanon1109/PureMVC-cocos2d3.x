#ifndef __VIEW_COMMAND__
#define __VIEW_COMMAND__
#include "Command.h"
class ViewCommand:public Command
{
public:
	ViewCommand(void);
	~ViewCommand(void);

	//************************************
	// Method:    execute	ִ��
	// Parameter: Notification notification	 ��Ϣ��
	// Returns:   void
	//************************************
	void virtual execute(Notification* notification);
};
#endif
