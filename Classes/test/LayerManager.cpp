#include "LayerManager.h"

LayerManager::LayerManager(void)
{

}

LayerManager::~LayerManager(void)
{

}

static LayerManager* mInstance = NULL;
LayerManager* LayerManager::getInstance()
{
	if (mInstance == NULL)
		mInstance = new LayerManager();
	return mInstance;
}
