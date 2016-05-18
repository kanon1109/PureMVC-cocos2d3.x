#ifndef __COMMAND__
#define __COMMAND__
#include "cocos2d.h"
#include "Notification.h"
USING_NS_CC;
class Command:public Ref
{
public:
	Command(void);
	~Command(void);

	//************************************
	// Method:    execute	执行
	// Parameter: Notification notification	消息体
	// Returns:   void
	//************************************
	void virtual execute(Notification notification);
};
#endif
