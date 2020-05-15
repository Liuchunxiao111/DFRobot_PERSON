# DFRobot_PERSON

这是一个用来练习Arduino封库的程序，通过一个简单的功能对Arduino封库的代码规范、书写方法有一个大致的了解。

![正反面svg效果图](https://github.com/ouki-wang/DFRobot_Sensor/raw/master/resources/images/SEN0245svg1.png)

## Table of Contents

* [Summary](#Summary)
* [Installation](#Installation)
* [Methods](#Methods)
* [Compatibility](#Compatibility)
* [History](#History)
* [Credits](#Credits)

## Summary

这个库具有设置名字，设置年龄，获取名字，获取年龄的功能

## Installation

To use this library, first download the library file, paste it into the \Arduino\libraries directory, then open the examples folder and run the demo in the folder.

## Methods

```go
~~~
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
```

## Compatibility

|     MCU     | Work Well | Work Wrong | Untested | Remarks |
| :---------: | :-------: | :--------: | :------: | :-----: |
| Arduino uno |     √     |            |          |         |
|  Mega2560   |     √     |            |          |         |
|    ESP32    |     √     |            |          |         |
|  Micro:bit  |     √     |            |          |         |

## History

* data 2020-5-15
* version v0.1

## Credits

