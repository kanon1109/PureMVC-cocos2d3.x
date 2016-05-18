#ifndef __MEDIATOR__
#define __MEDIATOR__
#include "cocos2d.h"
#include "Proxy.h"
#include "Notification.h"
USING_NS_CC;
using namespace std;
//管理view
class Mediator: public Ref
{
public:
	Mediator(void);
	~Mediator(void);
	//mediator名字
	const char* mediatorName;
protected:
	//************************************
	// Method:    sendNotification		发送消息
	// Parameter: const char * notificationName		消息名称
	// Parameter: Object							参数对象
	// Returns:   void
	//************************************
	virtual void sendNotification(const char* notificationName, Ref* obj = NULL);

	//************************************
	// Method:    listNotificationInterests	列出感兴趣的消息
	// Returns:   vector<const char*>		消息列表
	//************************************
	virtual vector<const char*> listNotificationInterests();

	//************************************
	// Method:    handleNotification			执行监听的消息
	// Parameter: Notification * notification	消息体
	// Returns:   void
	//************************************
	virtual void handleNotification(Notification* notification){};

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

	//消息列表
	vector<const char*> notificationList;

private:
	//接受mvc内部消息
	void onGetMvcMsg(Ref* notification);
};
#endif