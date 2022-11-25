#pragma once
#include "Shape.h"


class Triangle : public shape
{
private:
	Point corner1;
	Point corner2;
	Point corner3;
public:
	Triangle(Point p1, Point p2, Point p3, GfxInfo shapeGfxInfo);
	virtual ~Triangle();
	virtual void Draw(GUI* pUI) const;
};
