#ifndef __NOTIFICATION__
#define __NOTIFICATION__
#include "cocos2d.h"
USING_NS_CC;
//��Ϣ�����
class Notification:public Ref
{
public:
	Notification(void);
	~Notification(void);
	//��Ϣ��
	const char* notificationName;
	//��Ϣ��
	Ref* body;
};
#endif
