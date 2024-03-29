/********************************************************************************************************
 * 可变参数列表函数编写
 * ref:https://blog.csdn.net/chenxin6991/article/details/80272677
 * params:
 * int n:可变参数的个数
 * ...:可变参数的参数列表
 *******************************************************************************************************/

#ifndef __ARGLIST_H__
#define __ARGLIST_H__

#include<stdio.h>
#include<stdarg.h> //如果要编写可变参数列表函数，必须包含这个可变参数列表头文件

void show_argList(int n,...);//对可变参数列表进行展示

#endif