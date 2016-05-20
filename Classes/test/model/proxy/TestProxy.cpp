#include "TestProxy.h"
#include "TestVo.h"

TestProxy::TestProxy(void)
{
	this->proxyName = "testProxy";
}

TestProxy::~TestProxy(void)
{
}

void TestProxy::initData()
{
	//初始化数据
	for (int i = 0; i < 10; ++i)
	{
		TestVo* tVo = new TestVo();
		tVo->id = i;
		tVo->name = CCString::createWithFormat("name %d", i)->_string;
		tVo->retain();
		this->vect.push_back(tVo);
	}
}

TestVo* TestProxy::getVoById( int id )
{
	int count = this->vect.size();
	for (int i = 0; i < count; ++i)
	{
		TestVo* tVo = (TestVo*)this->vect.at(i);
		if (tVo->id == id)
			return tVo;
	}
	return NULL;
}


