#pragma once
#include "Notification.h"
#include "Command.h"
class InitDataCommand:public Command
{
public:
	InitDataCommand(void);
	~InitDataCommand(void);

	//************************************
	// Method:    execute	ִ��
	// Parameter: Notification notification	 ��Ϣ��
	// Returns:   void
	//************************************
	void virtual execute(Notification* notification);
};

