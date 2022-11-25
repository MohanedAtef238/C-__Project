#pragma once
#include "Shape.h"


class Circle : public shape
{
private:
	Point center;
	Point radius;
public:
	Circle(Point p1, Point p2, GfxInfo shapeGfxInfo);
	virtual ~Circle();
	virtual void Draw(GUI* pUI) const;
};
