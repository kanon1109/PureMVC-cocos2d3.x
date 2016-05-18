#ifndef __PURE_MVC_TEST__
#define __PURE_MVC_TEST__
#include "cocos2d.h"
USING_NS_CC;
class PureMvcTest:public Scene
{
public:
	PureMvcTest(void);
	~PureMvcTest(void);
	void startMvc();
	CREATE_FUNC(PureMvcTest);
};
#endif
