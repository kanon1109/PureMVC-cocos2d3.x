#include "TestPanel.h"
#include "ui\UIButton.h"
using namespace cocos2d::ui;

TestPanel::TestPanel(void)
{
	Button* btn = Button::create("buttonnormal.png","buttonpressed.png");
	btn->setTag(1);
	btn->setPosition(Vec2(200, 200));
	this->addChild(btn);
}

TestPanel::~TestPanel(void)
{

}
