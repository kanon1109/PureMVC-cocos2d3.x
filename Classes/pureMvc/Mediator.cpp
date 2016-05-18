#include "Mediator.h"
#include "Facade.h"

Mediator::Mediator(void)
{
	NotificationCenter::getInstance()->addObserver(this, CC_CALLFUNCO_SELECTOR(Mediator::onGetMvcMsg), MVC_MESSAGE, NULL);
}

Mediator::~Mediator(void)
{
}

void Mediator::sendNotification( const char* notificationName, Ref* obj /*= NULL*/ )
{
	g_facade->sendNotification(notificationName, obj);
}

Proxy* Mediator::retrieveProxy( const char* proxyName )
{
	return g_facade->retrieveProxy(proxyName);
}

Mediator* Mediator::retrieveMediator( const char* mediatorName )
{
	return g_facade->retrieveMediator(mediatorName);
}

vector<const char*> Mediator::listNotificationInterests()
{
	vector<const char*> vect;
	return vect;
}

void Mediator::onGetMvcMsg( Ref* param )
{
	Notification* notification = (Notification*)param;
	const char* notificationName = notification->notificationName;
	int count = this->notificationList.size();
	for (int i = 0; i < count; ++i)
	{
		const char* messageName = this->notificationList.at(i);
		if(strcmp(notificationName, messageName) == 0)
		{
			handleNotification(notification);
		}
	}
}
