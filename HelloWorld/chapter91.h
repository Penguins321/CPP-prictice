#ifndef __CHAPTER91__
#define __CHAPTER91__

// vs中自己定义头文件，名称只能由数字，字母，下划线组成，.h是自带的，无需添加

struct polar {
	double distance;
	double angle;
};

struct rect {
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif