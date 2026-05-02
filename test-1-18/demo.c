#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
////main函数也叫主函数
//
//int main()
//{
//	int a = 10;//创建整形类型的变量， 名字叫a， 并赋值为10
//	printf("abcdef\b");/*使用printf打印*/
//	//ab
//	return 0;
//}




//
//#include <stdbool.h>
//
//int main()
//{
//	_Bool flag = false;
//	bool flag2 = false;
//
//	if (flag)
//		printf("hehe\n");
// 
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(a));
//	
//	return 0;
//}

//
//int main()
//{
//	/*int a = 10;
//	printf("%d\n", a);*/
//	printf("%zd", sizeof(_Bool));
//
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	short s = 5;
//	int b = 10;
//
//	printf("%zd\n", sizeof(s = b + 1));
//
//	printf("s = %d", s);
//
//	return 0;
//}



	//signed int --- 有符号的int
	//对于有符号的整数打印应该使用%d
	//
	//对于无符号整数的打印应该使用%u
	//

//int main()
//{
//	int num = -100;
//	printf("%u\n , num");
//	return 0;
//}










//
//
//
//
//
//#include <stdbool.h>
//
//int main()
//{
//	//局部变量 - 共享单车
//	unsigned int age = 10;//初始化
//	age = 20;//赋值
//
//	printf("%u\n", age);
//	char ch = 'q';
//	float score = 3.14f;
//	double wegiht = 4.5;
//	bool flag = true;
//
//	return 0;
//}




//int main()
//{
//	{
//		int m = 100;
//		printf("%d\n" , m);//局部优先
//	}
//	return 0;
//}
//








//
//
//
//
//
//int main()
//{
//	{
//		int m = 100;
//		printf("%d\n", m);//局部优先
//		m = 200;
//		printf("%d\n", m);
//	}
//	return 0;
//}
//
//int main()
//{
//	//printf("%d\n", 33 + 42);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a + b);
//	printf("%d\n", a + 23);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 33 - 42);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a - b);
//	printf("%d\n", a - 23);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 5 * 5);
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a * b);
//	printf("%d\n", a * 23);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 9 / 3);// 3
//	printf("%d\n", 10 / 4);// 2.5
//	printf("%f\n", 10 / 4.0);// 2.5
//	printf("%f\n", 10.0 / 4);// 2.5
//	printf("%f\n", 10.0 / 4.0);// 2.5
//
//	return 0;
//}





//
//
//
//#include <stdio.h>
//int main()
//{
//	int score = 5;
//	score = (score / 20.0) * 100;
//	printf("%d\n", score);
//
//	return 0;
//}





//int main()
//{
//	printf("%d\n", 10 % 3);//10/3=3...1
//	int n = 0;
//	if (n%2 == 0)
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 11 % -5);// 1
//	printf("%d\n", -11 % -5);// -1
//	printf("%d\n", -11 % -5);// -1
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//初始化
//	a = 10;//赋值  == 是赋值操作符
//
//	return 0;
//}

//
//
//int main()
//{
//	int a = 0;//初始化
//	a = a + 10;
//	a += 10;//复合赋值
//
//	a = a - 3;//1
//	a -= 3;//2
//
//	a = a + 1;
//	a += 1;
//	a++;
//
//	return 0;
//}


//++ --

//
//int main()
//{
//	int a = 5;
//	//a = a + 1;//a自增1
//	//a++;
//	++a;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = ++a;//a=6 b=6
//	//前置++
//	//口诀： 先++， 后使用
//	// a=a+1, b=a
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = a++;//a=6 b=5
//	//后置++
//	//口诀： 先使用，后++
//	//b=a， a=a+1
//	//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}


//
//int main()
//{
//	int a = 5;
//	int b = a--;//a=4 b=5
//	//后置++
//	//口诀： 先使用，后--
//	//b=a， a=a-1
//	//
//	printf("a=%d\n", a);//4
//	printf("b=%d\n", b);//5
//
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	int b = --a;//a=4 b=4
//	//前置--
//	//口诀： 先-- ，后使用
//	//a=a-1 ， b=a;
//	//
//	printf("a=%d\n", a);//4
//	printf("b=%d\n", b);//5
//
//	return 0;
//}





//int main()
//{
//	int a = 5;
//	//printf("%d\n", --a);
//	printf("%d\n", a--);//5
//	printf("%d\n", a);//4
//
//	return 0;
//
//}
//
//int main()
//{
//	int a = 10;
//	//printf("%d\n", +10);
//	//printf("%d\n", +a);
//	//printf("%d\n", 10);
//	printf("%d\n", -10);
//	printf("%d\n", -a);
//	printf("%d\n", 10);
//
//	return 0;
//}











int main()
{
	int a = (int)3.14;//3

	printf("%d\n", a);
	//int b = (3.14);//err
	
	return 0;
}