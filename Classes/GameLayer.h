#ifndef __LAYER__
#define __LAYER__
#include "cocos2d.h"
USING_NS_CC;
class GameLayer
{
public:
	GameLayer(void);
	~GameLayer(void);
	//����
	static GameLayer* getInstance();
	//ui��
	Node* uiLayer;
};
#define g_gameLayer GameLayer::getInstance()
#endif;
