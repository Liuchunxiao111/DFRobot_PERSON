/*!
 * @file DFRobot_PERSON.h
 * @brief 定义DFRobot_PERSON 类的基础结构，基础方法的实现
 * 
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author [Arya](techsupport@dfrobot.com)
 * @version  V1.0
 * @eGDAte  2019-07-28
 * @get from https://www.dfrobot.com
 * @url xxxxxx
 */

#include "DFRobot_PERSON.h"
#include <string.h>

//构造函数
DFRobot_PERSON::DFRobot_PERSON(){
    Serial.print("hello DFRobot");
}
//析构函数
DFRobot_PERSON::~DFRobot_PERSON(){
    Serial.print("byebye DFRobot");
}
//设置姓名的函数
int DFRobot_PERSON::set_name(const char * name){
    if(strlen(name) < 20){
        _name = name;
        return 0;
    }
    return -1;
}
//设置年龄的函数
int DFRobot_PERSON::set_age(uint8_t age){
    if((age > 18) && (age < 100)){
        _age = age;
        return 0;
    }
    return -1;
}
//设置年龄的函数（字符）
int DFRobot_PERSON::set_age(String age){
    uint8_t age_f = age.toInt();
    if((age_f > 18) && (age_f < 100)){
        _age = age_f;
        return 0;
    }
    return 1;
}
//获取姓名的函数
String DFRobot_PERSON::get_name(){
    return _name;
}
//获取年龄的函数
uint8_t DFRobot_PERSON::get_age(){
    return _age;
}