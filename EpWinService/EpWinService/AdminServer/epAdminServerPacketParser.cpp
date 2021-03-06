/*! 
AdminServerPacketParser for the EpWinService
Copyright (C) 2013  Woong Gyu La <juhgiyo@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "stdafx.h"
#include "epAdminServerPacketParser.h"
#include "epAdminServerPacketInfo.h"
#include "epAdminServerProcessor.h"

AdminServerPacketParser::AdminServerPacketParser(unsigned int waitTimeMilliSec):BasePacketParser(waitTimeMilliSec)
{

}

AdminServerPacketParser::AdminServerPacketParser(const AdminServerPacketParser& b):BasePacketParser(b)
{

}

AdminServerPacketParser::~AdminServerPacketParser()
{

}

void AdminServerPacketParser::ParsePacket(const Packet &packet )
{
	//TODO: Parse Packet
	AdminServerProcessor processor;
	processor.Process(this,&packet);
}