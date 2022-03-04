// SingletonUtil.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "SingletonUtil.h"


// 这是导出变量的一个示例
SINGLETONUTIL_API int nSingletonUtil=0;

// 这是导出函数的一个示例。
SINGLETONUTIL_API int fnSingletonUtil(void)
{
    return 0;
}

// 这是已导出类的构造函数。
CSingletonUtil::CSingletonUtil()
{
    return;
}
