/*!
 * @file DFRobot_PERSON.h
 * @brief 这是一个抽象的传感器，可以设置人的姓名和年龄；并且可以判断你输入的名字和姓名是否规范；
 * 并且可以将姓名和年龄打印出来。
 * @n 该类重写了构造函数和析构函数的方法，创建局部变量，并全打印出来；该类设置年龄也使用了重载，使用重载
 * 的方法，能使输入的年龄可以是整数类型也可以是字符串类型。
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author [Arya](techsupport@dfrobot.com)
 * @version  V1.0
 * @eGDAte  2019-07-28
 * @get from https://www.dfrobot.com
 * @url xxxxxx
 */ 
#ifndef _DFRobot_PERSON
#define _DFRobot_PERSON

#include "Arduino.h"





class DFRobot_PERSON
{
public:
    char name[20];

    /*
    *@brief 构造函数
    *@param 可以对其重写
    */
   DFRobot_PERSON();

   /*
   *@brief 析构函数
   *@param 在程序销毁时执行
   */
   ~DFRobot_PERSON();

    /*
   *@brief  赋值姓名函数
   *@return 返回0表示初始化成功，返回-1失败
   */
   int set_name(const char * name);

   /*
   *@brief  赋值年龄函数
   *@return 返回0表示初始化成功，返回-1失败
   */
   int set_age(uint8_t age);

   /*
   *@brief  赋值年龄函数
   *@return 字符串类型的赋值，返回0表示初始化成功，返回-1失败
   */
   int set_age(String age);

   /*
   *@brief  取值函数
   *@return 获取姓名的函数
   */
   String get_name(void);

    /*
   *@brief  取值函数
   *@return 获取年龄的函数
   */
   uint8_t get_age(void);

private:
    String _name;
    uint8_t _age;
};

#endif