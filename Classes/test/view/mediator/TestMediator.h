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
	// Method:    listNotificationInterests	列出感兴趣的消息
	// Returns:   vector<const char*>		消息列表
	//************************************
	vector<const char*> listNotificationInterests();

	//************************************
	// Method:    handleNotification			执行监听的消息
	// Parameter: Notification * notification	消息体
	// Returns:   void
	//************************************
	void handleNotification(Notification* notification);
private:
	TestPanel* testPanel;
	//点击操作逻辑在mediator中
	void touchBtnHandler(Ref *obj, Widget::TouchEventType type);
	//测试数据代理
	TestProxy* tp;
};
#endif

