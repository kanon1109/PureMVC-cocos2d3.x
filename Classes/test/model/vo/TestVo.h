#ifndef __TEST_VO__
#define __TEST_VO__
#include "cocos2d.h"
using namespace std;
USING_NS_CC;
class TestVo:public Ref
{
public:
	TestVo(void);
	~TestVo(void);
	//id
	int id;
	//Ãû×Ö
	string name;
};
#endif
