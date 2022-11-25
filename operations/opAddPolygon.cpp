#include "opAddPolygon.h"
#include "..\shapes\Polygon.h"

#include "..\controller.h"

#include "..\GUI\GUI.h"
/*
opAddPolygon::opAddPolygon(controller* pCont) :operation(pCont)
{}
opAddPolygon::~opAddPolygon()
{}

//Execute the operation
void opAddPolygon::Execute()
{
	Point P1;

	//Get a Pointer to the Input / Output Interfaces
	GUI* pUI = pControl->GetUI();

	pUI->PrintMessage("New Polygon: Click at center");
	//Read center and store in point P1
	pUI->GetPointClicked(P1.x, P1.y);

	string msg = "center is at (" + to_string(P1.x) + ", " + to_string(P1.y) + " )";
	
	pUI->ClearStatusBar();
	
	int vertices = 5;
	//Preapre all rectangle parameters
	GfxInfo RectGfxInfo;

	//get drawing, filling colors and pen width from the interface
	RectGfxInfo.DrawClr = pUI->getCrntDrawColor();
	RectGfxInfo.FillClr = pUI->getCrntFillColor();
	RectGfxInfo.BorderWdth = pUI->getCrntPenWidth();

	RectGfxInfo.isFilled = false;	//default is not filled
	RectGfxInfo.isSelected = false;	//defualt is not selected


	//Create a rectangle with the above parameters
	Polygon* R = new Polygon(P1, vertices, RectGfxInfo);

	//Get a pointer to the graph
	Graph* pGr = pControl->getGraph();

	//Add the rectangle to the list of shapes
	pGr->Addshape(R);

}
*/