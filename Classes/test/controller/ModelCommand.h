#ifndef __MODEL_COMMAND__
#define __MODEL_COMMAND__
#include "Command.h"
class ModelCommand:public Command
{
public:
	ModelCommand(void);
	~ModelCommand(void);

	//************************************
	// Method:    execute	ִ��
	// Parameter: Notification notification	 ��Ϣ��
	// Returns:   void
	//************************************
	void virtual execute(Notification* notification);
};
#endif
