#include "TestMediator.h"
#include "GameLayer.h"
#include "MessageConfig.h"
#include "TestPanel.h"
#include "ui\UIButton.h"
#include "ui\CocosGUI.h"
#include "TestVo.h"

using namespace cocos2d::ui;

TestMediator::TestMediator(void):
testPanel(NULL)
{
	this->mediatorName = "testMediator";
	this->notificationList = listNotificationInterests();
	this->tp = (TestProxy*)(this->retrieveProxy("testProxy"));
}

TestMediator::~TestMediator(void)
{
}

vector<const char*> TestMediator::listNotificationInterests()
{
	//列出想要监听的消息
	vector<const char*> vect;
	vect.push_back(SHOW_TEST_PANEL);
	vect.push_back(TOUCH_BTN);
	return vect;
}

void TestMediator::handleNotification( Notification* notification )
{
	if (strcmp(notification->notificationName, SHOW_TEST_PANEL) == 0)
	{
		//创建testPanel
		CCLOG("create testPanel");
		if(this->testPanel == NULL)
		{
			this->testPanel = TestPanel::create();
			g_gameLayer->uiLayer->addChild(testPanel);
			Button* btn = (Button*)(this->testPanel->getChildByTag(1));
			btn->addTouchEventListener(CC_CALLBACK_2(TestMediator::touchBtnHandler, this));
		}
	}
	else if (strcmp(notification->notificationName, TOUCH_BTN) == 0)
	{
		TestVo* tVo = this->tp->getVoById(1);
		__Integer* inter = (__Integer*)(notification->body);

		CCLOG("%s", tVo->name.c_str());
		CCLOG("param %d", inter->getValue()); //测试收到的参数

	}
}

void TestMediator::touchBtnHandler( Ref *obj, Widget::TouchEventType type )
{
	switch (type)
	{
		case Widget::TouchEventType::BEGAN:
			//发送内部消息
			__Integer* inter = __Integer::create(2);
			this->sendNotification(TOUCH_BTN, inter);
			break;
	}
}
