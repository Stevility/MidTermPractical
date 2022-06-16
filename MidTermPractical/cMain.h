#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	//Questions Txt
	wxTextCtrl* ques1 = nullptr;
	wxTextCtrl* ques2 = nullptr;
	wxTextCtrl* ques3 = nullptr;
	wxTextCtrl* ques4 = nullptr;

	//Buttons Answers
	wxButton* ans1 = nullptr;
	wxButton* ans2 = nullptr;
	wxButton* ans3 = nullptr;
	wxButton* ans4 = nullptr;
	wxButton* incans = nullptr;
	int clans1 = 25;
	int inans1 = -1;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

