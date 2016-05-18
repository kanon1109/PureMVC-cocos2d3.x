#ifndef __PROXY__
#define __PROXY__
#include "cocos2d.h"
USING_NS_CC;
//数据管理对象
class Proxy:public Ref
{
public:
	Proxy(void);
	~Proxy(void);

	//proxy的名字
	const char* proxyName;
	
	//************************************
	// Method:    initData	初始化数据
	// Returns:   void
	//************************************
	virtual void initData();

	//************************************
	// Method:    sendNotification		发送消息
	// Parameter: const char * notificationName		消息名称
	// Parameter: Object							参数对象
	// Returns:   void
	//************************************
	virtual void sendNotification(const char* notificationName, Ref* obj = NULL);

	//************************************
	// Method:    retrieveProxy		获取proxy
	// Parameter: const char * proxyName	proxy名称
	// Returns:   Proxy*
	//************************************
	Proxy* retrieveProxy(const char* proxyName);
};
#endif

