#ifndef __CHAPTER91__
#define __CHAPTER91__

// vs���Լ�����ͷ�ļ�������ֻ�������֣���ĸ���»�����ɣ�.h���Դ��ģ��������

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