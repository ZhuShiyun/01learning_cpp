/**
  ******************************************************************************
  * @file           : struct.cpp
  * @author         : b-zhushiyun
  * @brief          : 使用结构体类型存储日期,并返回该日在该年的第几天信息,
  *                   具体天数从 1 开始计数,例如 2016 年 1 月 20 日返回 20,2 月 1 日返回 32
  * @attention      : None
  * @date           : 23-10-7
  ******************************************************************************
  */
unsigned int GetDateCount( DATE date )
{
    static unsigned int days_of_months[13] =
            { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    unsigned int i, date_id = 0;
    for( i = 1; i < date.month; i++ )
        date_id += days_of_months[i];
    date_id += date.day;
    if( date.month > 2 && IsLeap(date.year) )
        date_id++;
    return date_id;
}