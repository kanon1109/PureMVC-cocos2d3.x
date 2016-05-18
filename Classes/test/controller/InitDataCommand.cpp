#include "InitDataCommand.h"
#include "Facade.h"

InitDataCommand::InitDataCommand(void)
{
}

InitDataCommand::~InitDataCommand(void)
{
}

void InitDataCommand::execute( Notification* notification )
{
	g_facade->initProxyData();
}
