#include<vector>
#include<cmath>
#include "Point.h"



Point::Point()
{
}

Point::Point(std::vector<double> x)
{
	this->x = x;
}

double Point::dist(Point &p, int pos) const
{
	if (pos == 0)
	{
		return std::sqrt(std::pow(p.x[pos] - this->x[pos], 2) + dist(p, pos + 1));
	}
	else if (pos+1 < this->x.size() && pos + 1 < p.x.size()) 
	{
		return std::pow(p.x[pos] - this->x[pos], 2) + dist(p, pos + 1);
	}
	else 
	{
		return std::pow(p.x[pos] - this->x[pos], 2);
	}
}


Point::~Point()
{
}
