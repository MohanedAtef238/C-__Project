#include "Circle.h"

Circle::Circle(Point p1, Point p2, GfxInfo shapeGfxInfo):shape(shapeGfxInfo)
{
	center = p1;
	radius = p2;
}

Circle::~Circle()
{}

void Circle::Draw(GUI * pUI) const
{
	pUI->DrawCircle(center, radius, ShpGfxInfo);
}


