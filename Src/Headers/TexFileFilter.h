/*****************************************************************
 * Copyright (c) 2005 Tim de Jong, Brent Miszalski				 *
 *							       								 *
 * All rights reserved.											 *
 * Distributed under the terms of the MIT License.               *
 *****************************************************************/
#ifndef TEX_FILE_FILTER_H
#define TEX_FILE_FILTER_H

#include <be/storage/NodeInfo.h>
#include <be/storage/Entry.h>
#include <be/storage/Node.h>
#include <be/storage/FilePanel.h>

/** A simple text file filter for BeTeX
 */
class TexFileFilter : public BRefFilter 
{
	public:
		TexFileFilter();
		virtual bool				Filter(const entry_ref* ref, BNode* node, struct stat* st, const char* filetype);
};

#endif 


