#ifndef __MEDIATOR__
#define __MEDIATOR__
#include "cocos2d.h"
#include "Proxy.h"
#include "Notification.h"
USING_NS_CC;
using namespace std;
//����view
class Mediator: public Ref
{
public:
	Mediator(void);
	~Mediator(void);
	//mediator����
	const char* mediatorName;
protected:
	//************************************
	// Method:    sendNotification		������Ϣ
	// Parameter: const char * notificationName		��Ϣ����
	// Parameter: Object							��������
	// Returns:   void
	//************************************
	virtual void sendNotification(const char* notificationName, Ref* obj = NULL);

	//************************************
	// Method:    listNotificationInterests	�г�����Ȥ����Ϣ
	// Returns:   vector<const char*>		��Ϣ�б�
	//************************************
	virtual vector<const char*> listNotificationInterests();

	//************************************
	// Method:    handleNotification			ִ�м�������Ϣ
	// Parameter: Notification * notification	��Ϣ��
	// Returns:   void
	//************************************
	virtual void handleNotification(Notification* notification){};

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

	//��Ϣ�б�
	vector<const char*> notificationList;

private:
	//����mvc�ڲ���Ϣ
	void onGetMvcMsg(Ref* notification);
};
#endif