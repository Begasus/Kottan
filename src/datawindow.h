/*
 * Copyright 2019 Andi Machovec <andi.machovec@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 *
 */

#ifndef DATAWINDOW_H
#define DATAWINDOW_H

#include <Window.h>
#include <String.h>
#include <ColumnListView.h>
#include <Button.h>
#include <StringView.h>

#include <vector>


enum 
{
	DW_BUTTON_CLOSE = 'dw00'

};


class DataWindow : public BWindow {
public:
	DataWindow(BRect frame, BString fieldname, BString fieldtypename, std::vector<BString> messagedata);
	void MessageReceived(BMessage *msg);


private:
	BColumnListView	*fDataView;
	BButton			*fCloseButton;
	BStringView		*fDataLabel;
};

#endif
