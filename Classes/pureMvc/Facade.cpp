#include "Facade.h"
#include "Notification.h"

Facade::Facade(void)
{
	this->proxyDict = __Dictionary::create();
	this->proxyDict->retain();

	this->mediatorDict = __Dictionary::create();
	this->mediatorDict->retain();
}

Facade::~Facade(void)
{
}

void Facade::sendNotification( const char* notificationName, Ref* obj /*= NULL*/ )
{
	Notification* notification = new Notification();
	notification->notificationName = notificationName;
	notification->body = obj;
	NotificationCenter::getInstance()->postNotification(MVC_MESSAGE, notification);
}

static Facade* mInstance = NULL;
Facade* Facade::getInstance()
{
	if (mInstance == NULL)
		mInstance = new Facade();
	return mInstance;
}

void Facade::initProxyData()
{
	DictElement* pElement;
	Proxy* proxy;
	CCDICT_FOREACH(proxyDict, pElement)
	{
		proxy = (Proxy*)pElement->getObject();
		proxy->initData();
	}
}

void Facade::registerProxy( Proxy* proxy )
{
	this->proxyDict->setObject(proxy, proxy->proxyName);
}

void Facade::registerMediator( Mediator* mediator )
{
	this->mediatorDict->setObject(mediator, mediator->mediatorName);
}

Proxy* Facade::retrieveProxy( const char* proxyName )
{
	return (Proxy*)(this->proxyDict->objectForKey(proxyName));
}

Mediator* Facade::retrieveMediator( const char* mediatorName )
{
	return (Mediator*)(this->mediatorDict->objectForKey(mediatorName));
}
