#include "ViewCommand.h"
#include "Facade.h"
#include "TestMediator.h"

ViewCommand::ViewCommand(void)
{
}

ViewCommand::~ViewCommand(void)
{
}

void ViewCommand::execute( Notification* notification )
{
	g_facade->registerMediator(new TestMediator());
}
