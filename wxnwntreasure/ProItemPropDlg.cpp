// -*- C++ -*- generated by wxGlade 0.2.3 on Wed Oct 08 11:52:39 2003

#include "ProItemPropDlg.h"


ProItemPropDlg::ProItemPropDlg(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE)
{
    // begin wxGlade: ProItemPropDlg::ProItemPropDlg
    label_1 = new wxStaticText(this, -1, wxT("Profile Name"));
    text_1 = new wxTextCtrl(this, -1, wxT(""));
    label_2 = new wxStaticText(this, -1, wxT("Respawn Type"));
    const wxString choice_1_choices[] = {
        wxT("No Respawn"),
        wxT("Respawn")
    };
    choice_1 = new wxChoice(this, -1, wxDefaultPosition, wxDefaultSize, 2, choice_1_choices, 0);
    label_3 = new wxStaticText(this, -1, wxT("Respawn Time"));
    spin_1 = new wxSpinCtrl(this, -1, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    label_4 = new wxStaticText(this, -1, wxT("Respawn"));
    const wxString choice_2_choices[] = {
        wxT("(Defualt)")
    };
    choice_2 = new wxChoice(this, -1, wxDefaultPosition, wxDefaultSize, 1, choice_2_choices, 0);
    button_1 = new wxButton(this, -1, wxT("..."));
    label_5 = new wxStaticText(this, -1, wxT("Death/Open Spawn"));
    const wxString choice_3_choices[] = {
        wxT("")
    };
    choice_3 = new wxChoice(this, -1, wxDefaultPosition, wxDefaultSize, 1, choice_3_choices, 0);
    button_2 = new wxButton(this, -1, wxT("..."));
    label_6 = new wxStaticText(this, -1, wxT("Death/Open Sound"));
    text_2 = new wxTextCtrl(this, -1, wxT(""));
    label_7 = new wxStaticText(this, -1, wxT("Death/Open Damage"));
    spin_2 = new wxSpinCtrl(this, -1, wxT(""), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100);
    label_8 = new wxStaticText(this, -1, wxT("Treasure Table"));
    const wxString choice_4_choices[] = {
        wxT("(Defualt)")
    };
    choice_4 = new wxChoice(this, -1, wxDefaultPosition, wxDefaultSize, 1, choice_4_choices, 0);
    button_OK = new wxButton(this, -1, wxT("&OK"));
    button_Cancel = new wxButton(this, -1, wxT("&Cancel"));

    set_properties();
    do_layout();
    // end wxGlade
}


void ProItemPropDlg::set_properties()
{
    // begin wxGlade: ProItemPropDlg::set_properties
    SetTitle(wxT("Profile Proporties"));
    choice_1->SetSelection(1);
    choice_2->SetSelection(0);
    button_1->SetSize(wxSize(25, 21));
    choice_3->SetSelection(0);
    button_2->SetSize(wxSize(25, 21));
    choice_4->SetSelection(0);
    // end wxGlade
}


void ProItemPropDlg::do_layout()
{
    // begin wxGlade: ProItemPropDlg::do_layout
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    wxGridSizer* grid_sizer_1 = new wxGridSizer(1, 3, 0, 0);
    wxGridSizer* grid_sizer_2 = new wxGridSizer(8, 3, 0, 0);
    grid_sizer_2->Add(label_1, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 10);
    grid_sizer_2->Add(text_1, 0, wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(20, 20, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(label_2, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 10);
    grid_sizer_2->Add(choice_1, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(20, 20, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(label_3, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 10);
    grid_sizer_2->Add(spin_1, 0, wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(20, 20, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(label_4, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 10);
    grid_sizer_2->Add(choice_2, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(button_1, 0, wxLEFT|wxRIGHT|wxBOTTOM, 5);
    grid_sizer_2->Add(label_5, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 10);
    grid_sizer_2->Add(choice_3, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(button_2, 0, wxLEFT|wxRIGHT|wxBOTTOM, 5);
    grid_sizer_2->Add(label_6, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 10);
    grid_sizer_2->Add(text_2, 0, wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(20, 20, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(label_7, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 10);
    grid_sizer_2->Add(spin_2, 0, wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(20, 20, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(label_8, 0, wxLEFT|wxALIGN_CENTER_VERTICAL, 10);
    grid_sizer_2->Add(choice_4, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_2->Add(20, 20, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    sizer_1->Add(grid_sizer_2, 1, wxEXPAND, 0);
    grid_sizer_1->Add(button_OK, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 0);
    grid_sizer_1->Add(40, 40, 0, wxALIGN_CENTER_HORIZONTAL, 0);
    grid_sizer_1->Add(button_Cancel, 0, wxALIGN_CENTER_VERTICAL, 0);
    sizer_1->Add(grid_sizer_1, 0, wxEXPAND, 0);
    SetAutoLayout(true);
    SetSizer(sizer_1);
    sizer_1->Fit(this);
    sizer_1->SetSizeHints(this);
    Layout();
    // end wxGlade
}

