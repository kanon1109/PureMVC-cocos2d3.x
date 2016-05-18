#include "GameLayer.h"

GameLayer::GameLayer(void)
{

}

GameLayer::~GameLayer(void)
{

}

static GameLayer* mInstance = NULL;
GameLayer* GameLayer::getInstance()
{
	if (mInstance == NULL)
		mInstance = new GameLayer();
	return mInstance;
}
