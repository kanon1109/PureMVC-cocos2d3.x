#include "PureMvcTest.h"
#include "ModelCommand.h"
#include "ViewCommand.h"
#include "InitDataCommand.h"
#include "Facade.h"
#include "MessageConfig.h"
#include "GameLayer.h"

PureMvcTest::PureMvcTest(void)
{
	CCLOG("startMvc");
	this->startMvc();

	g_gameLayer->uiLayer = Node::create();
	this->addChild(g_gameLayer->uiLayer);

	/*__Array* ary = __Array::create();
	ary->retain();
	ary->addObject(__Integer::create(1));
	ary->addObject(__Integer::create(2));
	g_facade->sendNotification(SHOW_TEST_PANEL, ary);*/
	g_facade->sendNotification(SHOW_TEST_PANEL);
}

PureMvcTest::~PureMvcTest(void)
{

}

void PureMvcTest::startMvc()
{
	ModelCommand* modelCommand = new ModelCommand();
	ViewCommand* viewCommand = new ViewCommand();
	InitDataCommand* dataCommand = new InitDataCommand();
	modelCommand->execute(NULL);
	modelCommand->release();
	viewCommand->execute(NULL);
	viewCommand->release();
	dataCommand->execute(NULL);
}
