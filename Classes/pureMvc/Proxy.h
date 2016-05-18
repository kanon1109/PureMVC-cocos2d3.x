#ifndef __PROXY__
#define __PROXY__
#include "cocos2d.h"
USING_NS_CC;
//���ݹ������
class Proxy:public Ref
{
public:
	Proxy(void);
	~Proxy(void);

	//proxy������
	const char* proxyName;
	
	//************************************
	// Method:    initData	��ʼ������
	// Returns:   void
	//************************************
	virtual void initData();

	//************************************
	// Method:    sendNotification		������Ϣ
	// Parameter: const char * notificationName		��Ϣ����
	// Parameter: Object							��������
	// Returns:   void
	//************************************
	virtual void sendNotification(const char* notificationName, Ref* obj = NULL);

	//************************************
	// Method:    retrieveProxy		��ȡproxy
	// Parameter: const char * proxyName	proxy����
	// Returns:   Proxy*
	//************************************
	Proxy* retrieveProxy(const char* proxyName);
};
#endif

