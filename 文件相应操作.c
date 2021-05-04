//本操作在VS2019下编写，VS2010中输出(个人习惯VS2019)


//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
////文件的读写操作
//int main(void)
//{
//	FILE* fp;
//	char ch1[20]="string";
//	char c;
//	
//	if ((fp = fopen_s(ch1, "w")) == NULL)
//	{
//		printf("创建失败,即将退出程序.");
//		exit(0);
//	}
//	c = getchar();
//	while (c != '#')
//	{
//		fputc_s(c, fp);
//		putchar(c);
//		c = getchar();
//	}
//	//关闭
//	fclose(fp);
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//int main(void)
//{
//	FILE* p1;
//	FILE* p2;
//	//分别打开两个指向文件
//	p1 = fopen("string", "r");
//	p2 = fopen("string2", "w");
//	if (p1 == NULL)
//	{
//		printf("文件string打开失败!!!!");
//		exir(0);
//	}
//	if (p2 == NULL)
//	{
//		printf("string2创建失败!!!!!");
//		exit(0);
//	}
//	while (!feof(string))
//	{
//		fputc(fgetc(p1), p2);
//	}
//	fclose(P1);
//	fclose(P2);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define NAME 3
//struct student
//{
//	int num;
//	int x;
//	int age;
//}stu[NAME];
//int main(void)
//{
//	int i = 0;
//
//	for (i = 0; i < NAME; i++)
//	{
//		printf("第%d个：", i);
//
//		scanf_s("%d%d%d", &stu[i].num, &stu[i].x, &stu[i].age);
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
////文件的读写操作
//int main(void)
//{
//	FILE* fp;
//	char ch1[20]="string";
//	char c;
//	
//	if ((fp = fopen(ch1, "w")) == NULL)
//	{
//		printf("创建失败,即将退出程序.");
//		exit(0);
//	}
//	c = getchar();
//	while (c != '#')
//	{
//		fputc(c, fp);
//		putchar(c);
//		c = getchar();
//	}
//	//关闭
//	fclose(fp);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//int main(void)
//{
//	FILE* p1;
//	FILE* p2;
//	//分别打开两个指向文件
//	p1 = fopen("string", "r");
//	p2 = fopen("string2", "w");
//	if (p1 == NULL)
//	{
//		printf("文件string打开失败!!!!");
//		exit(0);
//	}
//	if (p2 == NULL)
//	{
//		printf("string2创建失败!!!!!");
//		exit(0);
//	}
//	while (!feof(p1))
//	{
//		fputc(fgetc(p1), p2);
//	}
//	fclose(p1);
//	fclose(p2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(int argc,char *argv[])
//{
//	FILE *in;
//	FILE *out;
//	if(argc!=3)
//	{
//		printf("创建失败!!");
//		exit(0);
//	}
//	in=fopen(argv[1],"r");
//	out=fopen(argv[2],"w");
//	if(in==NULL)
//	{
//		printf("创建失败!!");
//		exit(0);
//	}
//	if(out==NULL)
//	{
//		printf("创建失败!!");
//		exit(0);
//	}
//	while(!feof(in))
//	{
//		fputc(fgetc(in),out);
//	}
//	fclose(in);
//	fclose(out);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define NAME 3
//struct student
//{
//	int num;
//	int x;
//	int age;
//}stu[NAME];
//void start()
//{
//	int i=0;
//	FILE *p1;
//
//	p1=fopen("abc","wb");
//	if(p1==NULL)
//	{
//		printf("打开失败！！！！");
//		exit(0);
//	}
//	for(i=0;i<NAME;i++)
//	{
//	    fwrite(&stu[i],sizeof(struct student),1,p1);
//	}
//	fclose(p1);
//
//}
//void copy_my()
//{
//	int i=0;
//	FILE*p1;
//	p1=fopen("abdc","rb");
//	if(p1==NULL)
//	{
//		printf("出错了!");
//		exit(0);
//	}
//	
//	for(i=0;i<NAME;i++)
//	{
//		fread(&stu[i],sizeof(struct student),1,p1);
//	 
//	}
//	fclose(p1);
//}
//void display()
//{
//	int i=0;
//	FILE *p1;
//	p1=fopen("abc","rb");
//	if(p1==NULL)
//	{
//		printf("打开失败！！！！");
//		exit(0);
//	}
//	for(i=0;i<NAME;i++)
//	{
//		fread(&stu[i],sizeof(struct student),1,p1);
//		printf("num:%d sex:%d age:%d\n",stu[i].num,stu[i].x,stu[i].age);
//	}
//	fclose(p1);
//}
//int main(void)
//{
//	//拷贝函数
//	copy_my();
//	//int i=0;
//
//	/*for(i=0;i<3;i++)
//	{
//
//		scanf_s("%d%d%d",&stu[i].num,&stu[i].x,&stu[i].age);
//	}*/
//	//将数据放入文件中
//	start();
//	//将文件读入内存并且打印出来
//	display();
//	
//	
//
//	printf("\n");
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <Windows.h>
int main(void)
{
	FILE* fp;
	char string[81];
	fp = fopen("abcde", "w");

	if (fp == NULL)
	{
		printf("创建失败!即将退出!");
		exit(0);
	}
	//从键盘读入数据判断长度是否大于0
	while (strlen(gets(string)) > 0)
	{
		fputs(string, fp);
	}
	fputs("\0", fp);

	fclose(fp);
	fp = fopen("abcde", "r");
	if (fp == NULL)
	{
		printf("创建失败!即将退出!");
		exit(0);
	}
	while (fgets(string, 81, fp) != NULL)
	{
		fputs(string, stdout);
		printf("\n");
	}

	fclose(fp);
	return 0;
}

