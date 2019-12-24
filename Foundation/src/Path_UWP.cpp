//
// Path_WIN32U.cpp
//
// Library: Foundation
// Package: Filesystem
// Module:  Path
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#include "Poco/Path_UWP.h"
#include "Poco/UnWindows.h"


namespace Poco {


std::string PathImpl::currentImpl()
{
	return("\\");
}


std::string PathImpl::systemImpl()
{
	return("\\");
}


std::string PathImpl::homeImpl()
{
	return("\\");
}


std::string PathImpl::configHomeImpl()
{
	return homeImpl();
}


std::string PathImpl::dataHomeImpl()
{
	return homeImpl();
}


std::string PathImpl::cacheHomeImpl()
{
	return homeImpl();
}


std::string PathImpl::tempHomeImpl()
{
	return tempImpl();
}


std::string PathImpl::tempImpl()
{
	return("\\");
}


std::string PathImpl::configImpl()
{
	return("\\");
}


std::string PathImpl::nullImpl()
{
	return "NUL:";
}


std::string PathImpl::expandImpl(const std::string& path)
{
	return path;
}


void PathImpl::listRootsImpl(std::vector<std::string>& roots)
{
	return;
}


} // namespace Poco
