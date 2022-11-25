#pragma once
#include "Shape.h"


class Polygon : public shape
{
private:
	Point center;
	int vertices;
public:
	Polygon(Point p1, int vertices, GfxInfo shapeGfxInfo);
	virtual ~Polygon();
	virtual void Draw(GUI* pUI) const;
};
