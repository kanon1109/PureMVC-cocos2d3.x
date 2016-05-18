#ifndef __TEST_PROXY__
#define __TEST_PROXY__
#include "Proxy.h"
#include "TestVo.h"
using namespace std;
class TestProxy:public Proxy
{
public:
	TestProxy(void);
	~TestProxy(void);
	void initData();
	//根据id获取数据
	TestVo* getVoById(int id);
private:
	vector<Ref*> vect;
};
#endif
