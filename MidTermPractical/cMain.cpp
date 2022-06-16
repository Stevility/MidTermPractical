#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(25, OnButtonClicked)
EVT_BUTTON(20, OnButtonClicked)
EVT_BUTTON(7.753, OnButtonClicked)
EVT_BUTTON(52850, OnButtonClicked)
EVT_BUTTON(1, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Midterm Practical!", wxPoint(500, 200), wxSize(450,600))
{
	ques1 = new wxTextCtrl(this, wxID_ANY, "What is 5 X 5?", wxPoint(10, 10), wxSize(320, 70));
	ques1->Disable();
	ques2 = new wxTextCtrl(this, wxID_ANY, "What is 10 + 10?", wxPoint(10, 130), wxSize(320, 70));
	ques2->Disable();
	ques3 = new wxTextCtrl(this, wxID_ANY, "What is the population of our planet?", wxPoint(10, 250), wxSize(320, 70));
	ques3->Disable();
	ques4 = new wxTextCtrl(this, wxID_ANY, "How big is the milky way?", wxPoint(10, 370), wxSize(320, 70));
	ques4->Disable();


	ans1 = new wxButton(this, 25, "25", wxPoint(10, 85), wxSize(40, 40));
	ans2 = new wxButton(this, 20, "20", wxPoint(90, 205), wxSize(40, 40));
	ans3 = new wxButton(this, 7.753, "7.753 billion", wxPoint(10, 325), wxSize(150, 40));
	ans4 = new wxButton(this, 52850, "52,850 light years!", wxPoint(10, 445), wxSize(150, 40));
	incans = new wxButton(this, 1, "72,477 light years!", wxPoint(200, 445), wxSize(150, 40));

}

cMain::~cMain()
{
}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	if (clans1 > 2)
	{
		wxMessageBox("Correct!");
		
	}
	else if (clans1 <= 1)
	{
		wxMessageBox("Incorrect!");
	}
	
	evt.Skip();
}