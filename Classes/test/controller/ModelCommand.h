#ifndef __MODEL_COMMAND__
#define __MODEL_COMMAND__
#include "Command.h"
class ModelCommand:public Command
{
public:
	ModelCommand(void);
	~ModelCommand(void);

	//************************************
	// Method:    execute	执行
	// Parameter: Notification notification	 消息体
	// Returns:   void
	//************************************
	void virtual execute(Notification* notification);
};
#endif
