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
	// Method:    sendNotification		������Ϣ
	// Parameter: const char * notificationName		��Ϣ����
	// Parameter: Object							��������
	// Returns:   void
	//************************************
	void sendNotification( const char* notificationName, Ref* obj = NULL);

	/**
	 * singleton
	 */
	static Facade* getInstance();

	//************************************
	// Method:    initProxyData		��ʼ������proxy
	// Returns:   void
	//************************************
	void initProxyData();
	
	//************************************
	// Method:    registerProxy		ע��proxy
	// Parameter: Proxy * proxy		���ݴ���
	// Returns:   void
	//************************************
	void registerProxy(Proxy* proxy);

	//************************************
	// Method:    registerMediator	ע��mediator
	// Parameter: Mediator * mediator	view�н�
	// Returns:   void
	//************************************
	void registerMediator(Mediator* mediator);	

	//************************************
	// Method:    retrieveProxy		��ȡproxy
	// Parameter: const char * proxyName	proxy����
	// Returns:   Proxy*
	//************************************
	Proxy* retrieveProxy(const char* proxyName);

	//************************************
	// Method:    retrieveMediator	��ȡmediator
	// Parameter: const char * mediatorName	mediator����
	// Returns:   Mediator*
	//************************************
	Mediator* retrieveMediator(const char* mediatorName);
private:
	__Dictionary* proxyDict;					//���proxy
	__Dictionary* mediatorDict;					//���mediator
};
#define g_facade Facade::getInstance()
#endif
