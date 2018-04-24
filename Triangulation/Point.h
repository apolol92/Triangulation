#pragma once
#include<vector>
class Point
{
private:
	std::vector<double> x;
public:
	Point();
	Point(std::vector<double> x);
	double dist(Point &p, int pos = 0) const;
	~Point();
};

