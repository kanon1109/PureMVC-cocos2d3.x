#include "Proxy.h"
#include "Facade.h"

Proxy::Proxy(void)
{
}

Proxy::~Proxy(void)
{
}

void Proxy::initData()
{
	//TODO ×ÓÀà¼Ì³Ð
}

void Proxy::sendNotification(const char* notificationName, Ref* obj /*= NULL*/ )
{
	g_facade->sendNotification(notificationName, obj);
}

Proxy* Proxy::retrieveProxy( const char* proxyName )
{
	return g_facade->retrieveProxy(proxyName);
}
