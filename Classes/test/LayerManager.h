#ifndef __LAYERMANAGER__
#define __LAYERMANAGER__
#include "cocos2d.h"
USING_NS_CC;
class LayerManager
{
public:
	LayerManager(void);
	~LayerManager(void);
	//����
	static LayerManager* getInstance();
	//ui��
	Node* uiLayer;
};
#define g_layerManager LayerManager::getInstance()
#endif;
