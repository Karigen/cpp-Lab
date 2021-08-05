#include<graphics.h>
#include"Controller.h"
#include"Shape.h"
#include"Point.h"
#include"Rectangle.h"
#include"Circle.h"
#include"Triangle.h"
#include"Line.h"

Controller::Controller(unsigned int height, unsigned int width)
{
	this->height = height;
	this->width = width;
}

void Controller::open()
{
	initgraph(height, width, 0);
	setbkcolor(WHITE);
	setfont(18, 0, "宋体");
}

void Controller::clearMenu()
{
	setfillcolor(WHITE);
	bar(0, 0, 1200, 76);
}

void Controller::mainMenu()
{

	setcolor(BLACK);
	line(1, 1, 1198, 1);
	line(1198, 1, 1198, 75);
	line(1198, 75, 1, 75);
	line(1, 75, 1, 1);

	outtextxy(3, 3, "欢迎进入杨宇航的秘密画板，请根据菜单选择您想进行的操作：");//主菜单
	xyprintf(3, 21, "1.输入1画图     图形总数：%d 圆形数量：%d", LJRectangle::getNumberOfRectangl() + Circle::getNumberOfCircle() + Triangle::getNumberOfTriangle() + Line::getNumberOfLine(), Circle::getNumberOfCircle());
	xyprintf(3, 39, "2.输入2清除屏幕 点的数量：%d 三角形数量：%d", 3 * LJRectangle::getNumberOfRectangl() + 2 * Circle::getNumberOfCircle() + 4 * Triangle::getNumberOfTriangle() + 2 * Line::getNumberOfLine(), Triangle::getNumberOfTriangle());
	xyprintf(3, 57, "3.输入0退出     矩形数量：%d 线的数量：%d", LJRectangle::getNumberOfRectangl(), Line::getNumberOfLine());
}

void Controller::drawingMenu()
{
	setcolor(BLACK);
	line(1, 1, 1198, 1);
	line(1198, 1, 1198, 75);
	line(1198, 75, 1, 75);
	line(1, 75, 1, 1);

	outtextxy(3, 3, "欢迎进入杨宇航的秘密画板，请根据菜单选择您想进行的操作：");//画图菜单
	outtextxy(3, 21, "1.输入1画矩形   4.输入4画线");
	outtextxy(3, 39, "2.输入2画圆形");
	outtextxy(3, 57, "3.输入3画三角形");
}

void Controller::errorMenu()
{

	setcolor(BLACK);
	line(1, 1, 1198, 1);
	line(1198, 1, 1198, 75);
	line(1198, 75, 1, 75);
	line(1, 75, 1, 1);

	outtextxy(3, 3, "输入错误");
	outtextxy(3, 21, "按任意键继续");
	getch();
}

void Controller::clearBoard()
{
	setfillcolor(WHITE);
	bar(0, 76, 1200, 700);
}

void Controller::close()
{
	closegraph();
}

unsigned int Controller::getHeight()
{
	return height;
}

void Controller::setHeight(unsigned int height)
{
	this->height = height;
}

unsigned int Controller::getWidth()
{
	return width;
}
void Controller::setWidth(unsigned int width)
{
	this->width = width;
}