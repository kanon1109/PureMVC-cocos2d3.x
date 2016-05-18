#ifndef __NOTIFICATION__
#define __NOTIFICATION__
#include "cocos2d.h"
USING_NS_CC;
//消息体对象
class Notification:public Ref
{
public:
	Notification(void);
	~Notification(void);
	//消息名
	const char* notificationName;
	//消息体
	Ref* body;
};
#endif
