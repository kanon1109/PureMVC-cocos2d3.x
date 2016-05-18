#include "ModelCommand.h"
#include "Facade.h"
#include "TestProxy.h"

ModelCommand::ModelCommand(void)
{
}

ModelCommand::~ModelCommand(void)
{
}

void ModelCommand::execute( Notification* notification )
{
	g_facade->registerProxy(new TestProxy());
}
