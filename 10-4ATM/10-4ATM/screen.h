#ifndef SCREEN_H
#define SCREEN_H

#include <string>
using namespace std;

class Screen
{
public:
	void disPlayMessage(string) const;
	void disPlayMessageLine(string) const;
	void disPlayDollar(double) const;

};


#endif