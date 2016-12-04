// import_obj.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"

#include "../inc/common.h"

class Child : public Parent
{
public:
	void setNum(int v){ num = v; };
	int getNum(){ return num; };
private:
	int num;
};

Parent* createObj()
{
	return new Child();
}
