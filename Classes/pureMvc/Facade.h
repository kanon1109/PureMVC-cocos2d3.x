#ifndef __FACADE__
#define __FACADE__
#define MVC_MESSAGE "mvc_message"
#include "cocos2d.h"
#include "Proxy.h"
#include "Mediator.h"
USING_NS_CC;
class Facade
{
public:
	Facade(void);
	~Facade(void);

	//************************************
	// Method:    sendNotification		发送消息
	// Parameter: const char * notificationName		消息名称
	// Parameter: Object							参数对象
	// Returns:   void
	//************************************
	void sendNotification( const char* notificationName, Ref* obj = NULL);

	/**
	 * singleton
	 */
	static Facade* getInstance();

	//************************************
	// Method:    initProxyData		初始化所有proxy
	// Returns:   void
	//************************************
	void initProxyData();
	
	//************************************
	// Method:    registerProxy		注册proxy
	// Parameter: Proxy * proxy		数据代理
	// Returns:   void
	//************************************
	void registerProxy(Proxy* proxy);

	//************************************
	// Method:    registerMediator	注册mediator
	// Parameter: Mediator * mediator	view中介
	// Returns:   void
	//************************************
	void registerMediator(Mediator* mediator);	

	//************************************
	// Method:    retrieveProxy		获取proxy
	// Parameter: const char * proxyName	proxy名称
	// Returns:   Proxy*
	//************************************
	Proxy* retrieveProxy(const char* proxyName);

	//************************************
	// Method:    retrieveMediator	获取mediator
	// Parameter: const char * mediatorName	mediator名称
	// Returns:   Mediator*
	//************************************
	Mediator* retrieveMediator(const char* mediatorName);
private:
	__Dictionary* proxyDict;					//存放proxy
	__Dictionary* mediatorDict;					//存放mediator
};
#define g_facade Facade::getInstance()
#endif
