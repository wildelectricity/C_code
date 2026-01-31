#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//按F10代码就开始执行再按F10执行下一行代码
//main函数
/*main函数是程序的入口C语言程序是从main函数的第一行开始执行main函数虽然重要，但是有且仅一个*/

//int main()
//{
//	printf("hello bit\n");
//	printf("hello bit\n");
//	printf("hello bit\n");
//	return 0;
//}
//
//
//
//
//


//
//
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
//
//
//main函数的多种写法

//1 - 古老写法 - 
//void main()
//{
//	printf("hehe\n");
//}


//2.知识参数部分多了void,这里的void表示main函数无参数
//int main(void)
//{
//	return 0;
//}
//
//int main()
//{
//	return 0;
//}


//3
//其实main函数可以有参数，他的参数有特殊意义，如果你想使用main函数的参数，那就协商
//如果不想使用main函数的参数，那就不写
//暂时不需要了解main的参数
//
//int main(int argc, char* argv[])；
//{
//return 0;
//}





//printf 是函数 - C语言的标准提供现成的函数
//功能 在屏幕上打印信息
//printf format - 按照格式来打印信息
//** 括起来的-串字符被称为 字符串
//
//int main()
//{
//	printf("hello song ji\n");
//	printf("haha");
//	printf("cuihua");
//
//	return 0;
//}

//%d - 打印整数
//%c - 打印字符
//%f - 打印小数
//%d - 打印整数

//#include <stdio.h>
//std - standard - 标准
//i intpit -- 输入
//o - output 输出
//int main()
//{
//	printf("hehe\n");
//	printf("%s\n", "haha");
//	printf("%d\n", 100);
//	printf("%c\n", 'q');//单引号括起来的字符
//	printf("%f\n", 3.14);//%f 默认小数点后会打印6位
//
//	return 0;
//}




//
//
//int main()
//{
//
//	printf("heheh\n");
//	return 0;
//}



//C语言中放在单引号中的都是字符
//'a'

//int main()
//{
////	'a';
////	'q';
////	'1';
////	'#';
//
//	printf("%c\n",'a');
//	printf("%c\n", 97);
//
//	return 0;
//}

//int main()
//{
//	//32~127
//	//循环
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		printf("%c", i);
//		if (i % 16 == 15)
//			printf("\n");
//	}
//	return 0;
//}



//
//
//int main()
//{
//	printf("%s\n", "hello C");
//	printf("abcdef");
//
//	return 0;
//}
//



//字符串可以存放在字符数组中
//
//int main()
//{
//	char arr1[] = "abcdef";//arr1中含有\0
//	char arr2[] = { 'a' , 'b' , 'c' , 'd ' , 'e' , 'f','\0'};//arr2没有\0
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//strlen 是一个库函数 - 求字符串的长度，统计的是字符串\0之前的字符个数
//string.h
// strlen 返回值是siz
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";//arr1中含有\0
//	char arr2[] = { 'a' , 'b' , 'c' , 'd ' , 'e' , 'f', '\0'};//arr2没有\0
//	printf("%d\n" , strlen(arr1));//6
//	printf("%d\n" , strlen(arr2));//?
//
//	return 0;
//}

//
//#include <string.h>
//int main()
//{
//	
//	printf("abc\ndef");
//
//	return 0;
//}

//在支持三字母的编译器上
//??) --> ]
//??) --> [

//int main()
//{
//	printf("(are you ok\?\?)");//(are you ok]
//	//(are you ok ??)
//	//
//	return 0;
//}


//int main()
//{
//	/*printf("%c\n", 'a');
	//printf("%c\n", 'b');
	//printf("%c\n", '\'');*/

	//printf("%s\n", "sbc");
	//printf("%s\n", "a");
	//printf("%s\n", "\"");

	//printf("c:\test\song");

	//printf("\a");

	//printf("abcdef\n");
	//printf("abcd\bef\n");


	//printf("abcdef\r");
	//printf("a\tbc\tdef\tqq");
//
//	printf("%c\n", '130');//将\后的8进制数字转换10进制的数字，这个数字作为ASCII码值表示的字符就是
//	printf("%c\n", '77');//将\后的8进制数字转换10进制的数字，这个数字作为ASCII码值表示的字符就是
//	printf("%c\n", 'x36');//6
//
//	return 0;
//}
#include <string.h>
int main()
{ 
	printf("%zd\n", strlen("abcdef"));//6
	printf("%zd\n", strlen("c:\test\son\114\test.c"));//16
	printf("%zd\n", strlen("c:\test\son\118\test.c"));//17

	return 0;
}