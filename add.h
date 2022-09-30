#define _CRT_SECURE_NO_WARNINGS
#ifndef __ADD_H__
//ifndef如果没有定义过它，为真，然后接着往下执行，如果为假，可以防止同一个头文件被重复利用多次             
//这里每一个头文件是不同的，根据所写的头文件名字来写这里，为了避免人们在使用的时候把所有头文件内容都引一遍，
                 //所以，使用#ifndef __ADD_H__和#endif的形式表示
#define __ADD_H__
//函数的声明
int Add(int x, int y);

#endif