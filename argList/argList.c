#include"argList.h"

void show_argList(int n,...){

    va_list arg;//声明参数列表的数据类型对应的变量arg
    va_start(arg,n);//初始化参数列表型变量arg，并且开始
    for(int i=0;i<n;i++){
        int current_ele = va_arg(arg,int);
        printf("current_ele:%d\n",current_ele);
    }

    return ;

    va_end(arg);
}