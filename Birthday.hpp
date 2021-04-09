#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
public:
	Birthday(int y, int d, int m);
	void printdate();

private:
	int year;
	int month;
	int date;
};
#endif