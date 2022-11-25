#include "Triangle.h"

Triangle::Triangle(Point p1, Point p2, Point p3, GfxInfo shapeGfxInfo) :shape(shapeGfxInfo)
{
	corner1 = p1;
	corner2 = p2;
	corner3 = p3;
}

Triangle::~Triangle()
{}

void Triangle::Draw(GUI * pUI) const
{
	pUI->DrawTriangle(corner1, corner2, corner3, ShpGfxInfo);
}
