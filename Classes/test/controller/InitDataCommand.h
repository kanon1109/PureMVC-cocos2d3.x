#pragma once
#include "Notification.h"
#include "Command.h"
class InitDataCommand:public Command
{
public:
	InitDataCommand(void);
	~InitDataCommand(void);

	//************************************
	// Method:    execute	执行
	// Parameter: Notification notification	 消息体
	// Returns:   void
	//************************************
	void virtual execute(Notification* notification);
};

