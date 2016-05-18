#ifndef __TEST_MEDIATOR__
#define __TEST_MEDIATOR__
#include "Mediator.h"
#include "TestProxy.h"
#include "ui\CocosGUI.h" 
#include "TestPanel.h"

using namespace cocos2d::ui;
class TestMediator:public Mediator
{
public:
	TestMediator(void);
	~TestMediator(void);

	//************************************
	// Method:    listNotificationInterests	�г�����Ȥ����Ϣ
	// Returns:   vector<const char*>		��Ϣ�б�
	//************************************
	vector<const char*> listNotificationInterests();

	//************************************
	// Method:    handleNotification			ִ�м�������Ϣ
	// Parameter: Notification * notification	��Ϣ��
	// Returns:   void
	//************************************
	void handleNotification(Notification* notification);
private:
	TestPanel* testPanel;
	//��������߼���mediator��
	void touchBtnHandler(Ref *obj, Widget::TouchEventType type);
	//�������ݴ���
	TestProxy* tp;
};
#endif

