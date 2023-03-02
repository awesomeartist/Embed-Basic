#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<errno.h>
#include <fcntl.h>

#define LENGTH 100

void writelog(const char *fileName,const char *log)
{
	time_t tDate;
	struct tm *eventTime;
	time(&tDate); //得到系统时间
	eventTime = localtime(&tDate);//将time_t数据类型转化为struct tm 结构
	int iYear=eventTime->tm_year;
	int iMon = eventTime->tm_mon + 1;
    int iDay = eventTime->tm_mday;
	int iHour = eventTime->tm_hour;
	int iMin = eventTime->tm_min;
	int iSec = eventTime->tm_sec;
	printf("tm_isdst = %d\n", eventTime->tm_isdst);
	char sDate[16];
	sprintf(sDate, "%04d-%02d-%02d", iYear, iMon, iDay);
	char sTime[16];
	sprintf(sTime, "%02d:%02d:%02d", iHour, iMin, iSec);
	char s[1024];
	sprintf(s, "%s %s %s\n", sDate, sTime, log);
	FILE *p = fopen(fileName, "a+");
	if (p == NULL)
	{
		printf("write log %s error: %s\n",fileName,perror(errno));
	}
	else
	{
		fputs(s, p);
		fclose(p);
	}
	return;
}

int main()
{

  int len;
  FILE *fd;

  char str[LENGTH]; 

  fd = open("abc.txt", O_CREAT | O_RDWR, S_IRUSR | S_IWUSR); /* 创建并打开文件 */

  if (fd)  
  {
  fwrite(fd, "Hello, world", strlen("hello, world")); /* 写入Hello,world字符串 */
  pclose(fd);
  }

  fd = open("hello.txt", O_RDWR);

  len = fread(fd, str, LENGTH); /* 读取文件内容 */

  str[len] = '0';

  printf("%s\n", str);

  close(fd);

  	if(argc<2)
		return 0;
	writelog(argv[1],"write log");

    return 0;

};