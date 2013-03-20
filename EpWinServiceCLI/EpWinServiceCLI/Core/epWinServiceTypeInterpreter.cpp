/*! 
WinServiceTypeInterpreter for the EpWinServiceCLI
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
#include "epWinServiceTypeInterpreter.h"

ProcessObjectCommandPacketType WinServiceTypeInterpreter::GetProcessObjectCommandPacketType(CString subCommand)
{
	ProcessObjectCommandPacketType subCommandType=PROCESS_OBJECT_COMMAND_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("Start"))==0)
	{
		subCommandType= PROCESS_OBJECT_COMMAND_PACKET_TYPE_START;
	}
	else if(subCommand.Compare(_T("End"))==0)
	{
		subCommandType= PROCESS_OBJECT_COMMAND_PACKET_TYPE_END;
	}
	else if(subCommand.Compare(_T("Bounce"))==0)
	{
		subCommandType= PROCESS_OBJECT_COMMAND_PACKET_TYPE_BOUNCE;
	}
	else if(subCommand.Compare(_T("CustomCommand"))==0)
	{
		subCommandType= PROCESS_OBJECT_COMMAND_PACKET_TYPE_CUSTOM_PROCESS;
	}
	else if(subCommand.Compare(_T("RunCommand"))==0)
	{
		subCommandType= PROCESS_OBJECT_COMMAND_PACKET_TYPE_RUN_COMMAND;
	}
	return subCommandType;
}
ProcessObjectInfoGetPacketType WinServiceTypeInterpreter::GetProcessObjectInfoGetPacketType(CString subCommand)
{
	ProcessObjectInfoGetPacketType subCommandType=PROCESS_OBJECT_INFO_GET_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("CommandLine"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PreProcessCommandLine"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_PREPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PostProcessCommandLine"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_POSTPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("CustomProcessCommandLine"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PreProcessWaitTime"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_PREPROCESS_WAIT_TIME;
	}
	else if(subCommand.Compare(_T("PostProcessWaitTime"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_POSTPROCESS_WAIT_TIME;
	}
	else if(subCommand.Compare(_T("DomainName"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_DOMAINNAME;
	}
	else if(subCommand.Compare(_T("UserName"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_USERNAME;
	}
	else if(subCommand.Compare(_T("UserPassword"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_USERPASSWORD;
	}
	else if(subCommand.Compare(_T("DelayStartTime"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_DELAY_START_TIME;
	}
	else if(subCommand.Compare(_T("DelayPauseEndTime"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_DELAY_PAUSE_END_TIME;
	}
	else if(subCommand.Compare(_T("IsRestart"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_IS_RESTART;
	}
	else if(subCommand.Compare(_T("IsImpersonate"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_IS_IMPERSONATE;
	}
	else if(subCommand.Compare(_T("IsUserInterface"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_IS_USER_INTERFACE;
	}
	else if(subCommand.Compare(_T("Status"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_STATUS;
	}
	else if(subCommand.Compare(_T("All"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_GET_PACKET_TYPE_ALL;
	}
	return subCommandType;
}
ProcessObjectInfoSetPacketType WinServiceTypeInterpreter::GetProcessObjectInfoSetPacketType(CString subCommand)
{
	ProcessObjectInfoSetPacketType subCommandType=PROCESS_OBJECT_INFO_SET_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("CommandLine"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PreProcessCommandLine"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_PREPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PostProcessCommandLine"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_POSTPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("CustomProcessCommandLine"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PreProcessWaitTime"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_PREPROCESS_WAIT_TIME;
	}
	else if(subCommand.Compare(_T("PostProcessWaitTime"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_POSTPROCESS_WAIT_TIME;
	}
	else if(subCommand.Compare(_T("DomainName"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_DOMAINNAME;
	}
	else if(subCommand.Compare(_T("UserName"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_USERNAME;
	}
	else if(subCommand.Compare(_T("UserPassword"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_USERPASSWORD;
	}
	else if(subCommand.Compare(_T("DelayStartTime"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_DELAY_START_TIME;
	}
	else if(subCommand.Compare(_T("DelayPauseEndTime"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_DELAY_PAUSE_END_TIME;
	}
	else if(subCommand.Compare(_T("IsRestart"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_IS_RESTART;
	}
	else if(subCommand.Compare(_T("IsImpersonate"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_IS_IMPERSONATE;
	}
	else if(subCommand.Compare(_T("IsUserInterface"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_IS_USER_INTERFACE;
	}
	else if(subCommand.Compare(_T("All"))==0)
	{
		subCommandType= PROCESS_OBJECT_INFO_SET_PACKET_TYPE_ALL;
	}
	return subCommandType;
}
ServiceObjectCommandPacketType WinServiceTypeInterpreter::GetServiceObjectCommandPacketType(CString subCommand)
{
	ServiceObjectCommandPacketType subCommandType=SERVICE_OBJECT_COMMAND_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("Start"))==0)
	{
		subCommandType= SERVICE_OBJECT_COMMAND_PACKET_TYPE_START;
	}
	else if(subCommand.Compare(_T("End"))==0)
	{
		subCommandType= SERVICE_OBJECT_COMMAND_PACKET_TYPE_END;
	}
	else if(subCommand.Compare(_T("Pause"))==0)
	{
		subCommandType= SERVICE_OBJECT_COMMAND_PACKET_TYPE_PAUSE;
	}
	else if(subCommand.Compare(_T("Continue"))==0)
	{
		subCommandType= SERVICE_OBJECT_COMMAND_PACKET_TYPE_CONTINUE;
	}
	else if(subCommand.Compare(_T("Bounce"))==0)
	{
		subCommandType= SERVICE_OBJECT_COMMAND_PACKET_TYPE_BOUNCE;
	}
	else if(subCommand.Compare(_T("CustomCommand"))==0)
	{
		subCommandType= SERVICE_OBJECT_COMMAND_PACKET_TYPE_CUSTOM_PROCESS;
	}
	else if(subCommand.Compare(_T("RunCommand"))==0)
	{
		subCommandType= SERVICE_OBJECT_COMMAND_PACKET_TYPE_RUN_COMMAND;
	}
	return subCommandType;
}
ServiceObjectInfoGetPacketType WinServiceTypeInterpreter::GetServiceObjectInfoGetPacketType(CString subCommand)
{
	ServiceObjectInfoGetPacketType subCommandType=SERVICE_OBJECT_INFO_GET_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("ServiceName"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_SERVICENAME;
	}
	else if(subCommand.Compare(_T("PreProcessCommandLine"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_PREPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PostProcessCommandLine"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_POSTPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("CustomProcessCommandLine"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PreProcessWaitTime"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_PREPROCESS_WAIT_TIME;
	}
	else if(subCommand.Compare(_T("PostProcessWaitTime"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_POSTPROCESS_WAIT_TIME;
	}
	else if(subCommand.Compare(_T("DomainName"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_DOMAINNAME;
	}
	else if(subCommand.Compare(_T("UserName"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_USERNAME;
	}
	else if(subCommand.Compare(_T("UserPassword"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_USERPASSWORD;
	}
	else if(subCommand.Compare(_T("DelayStartTime"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_DELAY_START_TIME;
	}
	else if(subCommand.Compare(_T("DelayPauseEndTime"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_DELAY_PAUSE_END_TIME;
	}
	else if(subCommand.Compare(_T("IsRestart"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_IS_RESTART;
	}
	else if(subCommand.Compare(_T("IsImpersonate"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_IS_IMPERSONATE;
	}
	else if(subCommand.Compare(_T("IsUserInterface"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_IS_USER_INTERFACE;
	}
	else if(subCommand.Compare(_T("Status"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_STATUS;
	}
	else if(subCommand.Compare(_T("All"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_GET_PACKET_TYPE_ALL;
	}
	return subCommandType;
}

ServiceObjectInfoSetPacketType WinServiceTypeInterpreter::GetServiceObjectInfoSetPacketType(CString subCommand)
{
	ServiceObjectInfoSetPacketType subCommandType=SERVICE_OBJECT_INFO_SET_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("ServiceName"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_SERVICENAME;
	}
	else if(subCommand.Compare(_T("PreProcessCommandLine"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_PREPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PostProcessCommandLine"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_POSTPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("CustomProcessCommandLine"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("PreProcessWaitTime"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_PREPROCESS_WAIT_TIME;
	}
	else if(subCommand.Compare(_T("PostProcessWaitTime"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_POSTPROCESS_WAIT_TIME;
	}
	else if(subCommand.Compare(_T("DomainName"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_DOMAINNAME;
	}
	else if(subCommand.Compare(_T("UserName"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_USERNAME;
	}
	else if(subCommand.Compare(_T("UserPassword"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_USERPASSWORD;
	}
	else if(subCommand.Compare(_T("DelayStartTime"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_DELAY_START_TIME;
	}
	else if(subCommand.Compare(_T("DelayPauseEndTime"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_DELAY_PAUSE_END_TIME;
	}
	else if(subCommand.Compare(_T("IsRestart"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_IS_RESTART;
	}
	else if(subCommand.Compare(_T("IsImpersonate"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_IS_IMPERSONATE;
	}
	else if(subCommand.Compare(_T("IsUserInterface"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_IS_USER_INTERFACE;
	}
	else if(subCommand.Compare(_T("All"))==0)
	{
		subCommandType= SERVICE_OBJECT_INFO_SET_PACKET_TYPE_ALL;
	}
	return subCommandType;
}

MainServiceCommandPacketType WinServiceTypeInterpreter::GetMainServiceCommandPacketType(CString subCommand)
{
	MainServiceCommandPacketType subCommandType=MAIN_SERVICE_COMMAND_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("CustomCommand"))==0)
	{
		subCommandType= MAIN_SERVICE_COMMAND_PACKET_TYPE_CUSTOM_PROCESS;
	}
	else if(subCommand.Compare(_T("RunCommand"))==0)
	{
		subCommandType= MAIN_SERVICE_COMMAND_PACKET_TYPE_RUN_COMMAND;
	}
	return subCommandType;
}
MainServiceInfoGetPacketType WinServiceTypeInterpreter::GetMainServiceInfoGetPacketType(CString subCommand)
{
	MainServiceInfoGetPacketType subCommandType=MAIN_SERVICE_INFO_GET_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("ServiceName"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_SERVICE_NAME;
	}
	else if(subCommand.Compare(_T("DomainName"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_DOMAIN_NAME;
	}
	else if(subCommand.Compare(_T("UserName"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_USERNAME;
	}
	else if(subCommand.Compare(_T("UserPassword"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_USERPASSWORD;
	}
	else if(subCommand.Compare(_T("Dependency"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_DEPENDENCY;
	}
	else if(subCommand.Compare(_T("ProcessObjNum"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_NUM_OF_PROCESSES;
	}
	else if(subCommand.Compare(_T("ServiceObjNum"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_NUM_OF_SERVICES;
	}
	else if(subCommand.Compare(_T("CheckProcessObjInterval"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_CHECKPROCESSINTERVAL;
	}
	else if(subCommand.Compare(_T("CheckServiceObjInterval"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_CHECKSERVICEINTERVAL;
	}
	else if(subCommand.Compare(_T("CustomProcessCommandLine"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE;
	}
	else if(subCommand.Compare(_T("All"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_GET_PACKET_TYPE_ALL;
	}
	return subCommandType;
}

MainServiceInfoSetPacketType WinServiceTypeInterpreter::GetMainServiceInfoSetPacketType(CString subCommand)
{
	MainServiceInfoSetPacketType subCommandType=MAIN_SERVICE_INFO_SET_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("CheckProcessObjInterval"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_SET_PACKET_TYPE_CHECKPROCESSINTERVAL;
	}
	else if(subCommand.Compare(_T("CheckServiceObjInterval"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_SET_PACKET_TYPE_CHECKSERVICESINTERVAL;
	}
	else if(subCommand.Compare(_T("CustomProcessCommandLine"))==0)
	{
		subCommandType= MAIN_SERVICE_INFO_SET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE;
	}
	return subCommandType;
}

ServiceCommandPacketType WinServiceTypeInterpreter::GetServiceCommandPacketType(CString subCommand)
{
	ServiceCommandPacketType subCommandType=SERVICE_COMMAND_PACKET_TYPE_NULL;
	if(subCommand.Compare(_T("Start"))==0)
	{
		subCommandType= SERVICE_COMMAND_PACKET_TYPE_START;
	}
	else if(subCommand.Compare(_T("Continue"))==0)
	{
		subCommandType= SERVICE_COMMAND_PACKET_TYPE_CONTINUE;
	}
	else if(subCommand.Compare(_T("Stop"))==0)
	{
		subCommandType= SERVICE_COMMAND_PACKET_TYPE_STOP;
	}
	else if(subCommand.Compare(_T("Pause"))==0)
	{
		subCommandType= SERVICE_COMMAND_PACKET_TYPE_PAUSE;
	}
	else if(subCommand.Compare(_T("Control"))==0)
	{
		subCommandType= SERVICE_COMMAND_PACKET_TYPE_CONTROL;
	}
	else if(subCommand.Compare(_T("Install"))==0)
	{
		subCommandType= SERVICE_COMMAND_PACKET_TYPE_INSTALL;
	}
	else if(subCommand.Compare(_T("Uninstall"))==0)
	{
		subCommandType= SERVICE_COMMAND_PACKET_TYPE_UNINSTALL;
	}
	else if(subCommand.Compare(_T("Edit"))==0)
	{
		subCommandType= SERVICE_COMMAND_PACKET_TYPE_EDIT;
	}
	else if(subCommand.Compare(_T("GetStatus"))==0)
	{
		subCommandType= SERVICE_COMMAND_PACKET_TYPE_GET_STATUS;
	}
	return subCommandType;
}












CString WinServiceTypeInterpreter::GetPacketProcessStatusString(PacketProcessStatus status)
{
	CString retString=_T("");
	switch(status)
	{
	case PACKET_PROCESS_STATUS_SUCCESS:
		retString= _T("Success");
		break;
	case PACKET_PROCESS_STATUS_FAIL:
		retString= _T("Fail");
		break;
	case PACKET_PROCESS_STATUS_FAIL_OBJECT_IDX_OUT_OF_RANCE:
		retString= _T("Object Index Out of Range");
		break;
	case PACKET_PROCESS_STATUS_FAIL_ARGUMENT_ERROR:
		retString= _T("Argument Error");
		break;
	case PACKET_PROCESS_STATUS_FAIL_SERVICE_HANDLE_ERROR:
		retString= _T("Service Handle Error");
		break;
	}
	return retString;
}

CString WinServiceTypeInterpreter::GetRetrieveStatusString(RetrieveStatus status)
{
	CString retString=_T("");
	switch(status)
	{
	case RETRIEVE_STATUS_SUCCESS:
		retString= _T("Success");
		break;
	case RETRIEVE_STATUS_FAIL:
		retString= _T("Fail");
		break;
	case RETRIEVE_STATUS_FAIL_RESULT:
		retString= _T("Result Fail");
		break;
	case RETRIEVE_STATUS_FAIL_OBJECTIDX:
		retString= _T("Object Index Fail");
		break;
	case RETRIEVE_STATUS_FAIL_ARGUMENT:
		retString= _T("Argument Fail");
		break;
	}
	return retString;
}

CString WinServiceTypeInterpreter::GetReturnTypeString(ReturnType type)
{
	CString retString=_T("");
	switch(type)
	{
	case RETURN_TYPE_VOID:
		retString= _T("Void");
		break;
	case RETURN_TYPE_BOOL:
		retString= _T("Bool");
		break;
	case RETURN_TYPE_INT:
		retString= _T("Int");
		break;
	case RETURN_TYPE_UINT:
		retString= _T("UInt");
		break;
	case RETURN_TYPE_STRING:
		retString= _T("String");
		break;
	case RETURN_TYPE_PROCESSOBJ_INFO:
		retString= _T("ProcessObjectInfo");
		break;
	case RETURN_TYPE_SERVICEOBJ_INFO:
		retString= _T("ServiceObjectInfo");
		break;
	case RETURN_TYPE_SERVICE_STATUS:
		retString= _T("ServiceStatus");
		break;
	case RETURN_TYPE_SERVICE_STATUS_PROCESS:
		retString= _T("ServiceStatusProcess");
		break;
	case RETURN_TYPE_PROCESS_STATUS_TYPE:
		retString= _T("ProcessStatusType");
		break;
	case RETURN_TYPE_SERVICE_STATUS_TYPE:
		retString= _T("ServiceStatusType");
		break;
	case RETURN_TYPE_SERVICE_HANDLE_ERROR_INFO:
		retString= _T("ServiceHandleErrorInfo");
		break;
	}
	return retString;
}
CString WinServiceTypeInterpreter::getMainServiceCommandTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{
	case MAIN_SERVICE_COMMAND_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case MAIN_SERVICE_COMMAND_PACKET_TYPE_CUSTOM_PROCESS:
		retString =_T("CustomProcess");
		break;
	case MAIN_SERVICE_COMMAND_PACKET_TYPE_RUN_COMMAND:
		retString =_T("RunCommand");
		break;
	}
	return retString;

}

CString WinServiceTypeInterpreter::getMainServiceInfoGetTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_SERVICE_NAME:
		retString =_T("ServiceName");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_DOMAIN_NAME:
		retString =_T("DomainName");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_USERNAME:
		retString =_T("UserName");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_USERPASSWORD:
		retString =_T("UserPassword");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_DEPENDENCY:
		retString =_T("Dependency");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_NUM_OF_PROCESSES:
		retString =_T("ProcessObjNum");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_NUM_OF_SERVICES:
		retString =_T("ServiceObjNum");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_CHECKPROCESSINTERVAL:
		retString =_T("CheckProcessObjInterval");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_CHECKSERVICEINTERVAL:
		retString =_T("CheckServiceObjInterval");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE:
		retString =_T("CustomProcessCommandLine");
		break;
	case MAIN_SERVICE_INFO_GET_PACKET_TYPE_ALL:
		retString =_T("All");
		break;
	}
	return retString;

}

CString WinServiceTypeInterpreter::getMainServiceInfoSetTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{
	case MAIN_SERVICE_INFO_SET_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case MAIN_SERVICE_INFO_SET_PACKET_TYPE_CHECKPROCESSINTERVAL:
		retString =_T("CheckProcessObjInterval");
		break;
	case MAIN_SERVICE_INFO_SET_PACKET_TYPE_CHECKSERVICESINTERVAL:
		retString =_T("CheckServiceObjInterval");
		break;
	case MAIN_SERVICE_INFO_SET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE:
		retString =_T("CustomProcessCommandLine");
		break;
	}
	return retString;

}


CString WinServiceTypeInterpreter::getProcessObjectCommandTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{
	case PROCESS_OBJECT_COMMAND_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case PROCESS_OBJECT_COMMAND_PACKET_TYPE_START:
		retString =_T("Start");
		break;
	case PROCESS_OBJECT_COMMAND_PACKET_TYPE_END:
		retString =_T("End");
		break;
	case PROCESS_OBJECT_COMMAND_PACKET_TYPE_BOUNCE:
		retString =_T("Bounce");
		break;
	case PROCESS_OBJECT_COMMAND_PACKET_TYPE_CUSTOM_PROCESS:
		retString =_T("CustomCommand");
		break;
	case PROCESS_OBJECT_COMMAND_PACKET_TYPE_RUN_COMMAND:
		retString =_T("RunCommand");
		break;
	}
	return retString;

}

CString WinServiceTypeInterpreter::getProcessObjectInfoGetTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_COMMANDLINE:
		retString =_T("CommandLine");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_PREPROCESS_COMMANDLINE:
		retString =_T("PreProcessCommandLine");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_POSTPROCESS_COMMANDLINE:
		retString =_T("PostProcessCommandLine");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE:
		retString =_T("CustomProcessCommandLine");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_PREPROCESS_WAIT_TIME:
		retString =_T("PreProcessWaitTime");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_POSTPROCESS_WAIT_TIME:
		retString =_T("PostProcessWaitTime");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_DOMAINNAME:
		retString =_T("DomainName");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_USERNAME:
		retString =_T("UserName");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_USERPASSWORD:
		retString =_T("UserPassword");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_DELAY_START_TIME:
		retString =_T("DelayStartTime");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_DELAY_PAUSE_END_TIME:
		retString =_T("DelayPauseEndTime");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_IS_RESTART:
		retString =_T("IsRestart");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_IS_IMPERSONATE:
		retString =_T("IsImpersonate");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_IS_USER_INTERFACE:
		retString =_T("IsUserInterface");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_STATUS:
		retString =_T("Status");
		break;
	case PROCESS_OBJECT_INFO_GET_PACKET_TYPE_ALL:
		retString =_T("All");
		break;

	}
	return retString;

}

CString WinServiceTypeInterpreter::getProcessObjectInfoSetTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{

	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_COMMANDLINE:
		retString =_T("CommandLine");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_PREPROCESS_COMMANDLINE:
		retString =_T("PreProcessCommandLine");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_POSTPROCESS_COMMANDLINE:
		retString =_T("PostProcessCommandLine");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE:
		retString =_T("CustomProcessCommandLine");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_PREPROCESS_WAIT_TIME:
		retString =_T("PreProcessWaitTime");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_POSTPROCESS_WAIT_TIME:
		retString =_T("PostProcessWaitTime");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_DOMAINNAME:
		retString =_T("DomainName");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_USERNAME:
		retString =_T("UserName");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_USERPASSWORD:
		retString =_T("UserPassword");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_DELAY_START_TIME:
		retString =_T("DelayStartTime");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_DELAY_PAUSE_END_TIME:
		retString =_T("DelayPauseEndTime");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_IS_RESTART:
		retString =_T("IsRestart");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_IS_IMPERSONATE:
		retString =_T("IsImpersonate");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_IS_USER_INTERFACE:
		retString =_T("IsUserInterface");
		break;
	case PROCESS_OBJECT_INFO_SET_PACKET_TYPE_ALL:
		retString =_T("All");
		break;


	}
	return retString;

}

CString WinServiceTypeInterpreter::getServiceObjectCommandTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{
	case SERVICE_OBJECT_COMMAND_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case SERVICE_OBJECT_COMMAND_PACKET_TYPE_START:
		retString =_T("Start");
		break;
	case SERVICE_OBJECT_COMMAND_PACKET_TYPE_END:
		retString =_T("End");
		break;
	case SERVICE_OBJECT_COMMAND_PACKET_TYPE_PAUSE:
		retString =_T("Pause");
		break;
	case SERVICE_OBJECT_COMMAND_PACKET_TYPE_CONTINUE:
		retString =_T("Continue");
		break;
	case SERVICE_OBJECT_COMMAND_PACKET_TYPE_BOUNCE:
		retString =_T("Bounce");
		break;
	case SERVICE_OBJECT_COMMAND_PACKET_TYPE_CUSTOM_PROCESS:
		retString =_T("CustomCommand");
		break;
	case SERVICE_OBJECT_COMMAND_PACKET_TYPE_RUN_COMMAND:
		retString =_T("RunCommand");
		break;
	}
	return retString;

}
CString WinServiceTypeInterpreter::getServiceObjectInfoGetTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_SERVICENAME:
		retString =_T("ServiceName");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_PREPROCESS_COMMANDLINE:
		retString =_T("PreProcessCommandLine");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_POSTPROCESS_COMMANDLINE:
		retString =_T("PostProcessCommandLine");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE:
		retString =_T("CustomProcessCommandLine");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_PREPROCESS_WAIT_TIME:
		retString =_T("PreProcessWaitTime");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_POSTPROCESS_WAIT_TIME:
		retString =_T("PostProcessWaitTime");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_DOMAINNAME:
		retString =_T("DomainName");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_USERNAME:
		retString =_T("UserName");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_USERPASSWORD:
		retString =_T("UserPassword");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_DELAY_START_TIME:
		retString =_T("DelayStartTime");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_DELAY_PAUSE_END_TIME:
		retString =_T("DelayPauseEndTime");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_IS_RESTART:
		retString =_T("IsRestart");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_IS_IMPERSONATE:
		retString =_T("IsImpersonate");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_IS_USER_INTERFACE:
		retString =_T("IsUserInterface");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_STATUS:
		retString =_T("Status");
		break;
	case SERVICE_OBJECT_INFO_GET_PACKET_TYPE_ALL:
		retString =_T("All");
		break;

	}
	return retString;

}

CString WinServiceTypeInterpreter::getServiceObjectInfoSetTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{

	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_SERVICENAME:
		retString =_T("ServiceName");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_PREPROCESS_COMMANDLINE:
		retString =_T("PreProcessCommandLine");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_POSTPROCESS_COMMANDLINE:
		retString =_T("PostProcessCommandLine");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_CUSTOMPROCESS_COMMANDLINE:
		retString =_T("CustomProcessCommandLine");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_PREPROCESS_WAIT_TIME:
		retString =_T("PreProcessWaitTime");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_POSTPROCESS_WAIT_TIME:
		retString =_T("PostProcessWaitTime");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_DOMAINNAME:
		retString =_T("DomainName");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_USERNAME:
		retString =_T("UserName");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_USERPASSWORD:
		retString =_T("UserPassword");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_DELAY_START_TIME:
		retString =_T("DelayStartTime");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_DELAY_PAUSE_END_TIME:
		retString =_T("DelayPauseEndTime");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_IS_RESTART:
		retString =_T("IsRestart");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_IS_IMPERSONATE:
		retString =_T("IsImpersonate");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_IS_USER_INTERFACE:
		retString =_T("IsUserInterface");
		break;
	case SERVICE_OBJECT_INFO_SET_PACKET_TYPE_ALL:
		retString =_T("All");
		break;


	}
	return retString;

}
CString WinServiceTypeInterpreter::getServiceCommandTypeString(unsigned int subcommand)
{
	CString retString=_T("");
	switch(subcommand)
	{
	case SERVICE_COMMAND_PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case SERVICE_COMMAND_PACKET_TYPE_START:
		retString =_T("Start");
		break;
	case SERVICE_COMMAND_PACKET_TYPE_CONTINUE:
		retString =_T("Continue");
		break;
	case SERVICE_COMMAND_PACKET_TYPE_STOP:
		retString =_T("Stop");
		break;
	case SERVICE_COMMAND_PACKET_TYPE_PAUSE:
		retString =_T("Pause");
		break;
	case SERVICE_COMMAND_PACKET_TYPE_CONTROL:
		retString =_T("Control");
		break;
	case SERVICE_COMMAND_PACKET_TYPE_INSTALL:
		retString =_T("Install");
		break;
	case SERVICE_COMMAND_PACKET_TYPE_UNINSTALL:
		retString =_T("Uninstall");
		break;
	case SERVICE_COMMAND_PACKET_TYPE_EDIT:
		retString =_T("Edit");
		break;
	case SERVICE_COMMAND_PACKET_TYPE_GET_STATUS:
		retString =_T("GetStatus");
		break;

	}
	return retString;

}

CString WinServiceTypeInterpreter::GetSubcommandTypeString(PacketType type, unsigned int subcommand)
{
	CString retString=_T("");
	switch(type)
	{
	case PACKET_TYPE_NULL:
		retString =_T("");
		break;
	case PACKET_TYPE_MAIN_SERVICE_COMMAND:
		retString =getMainServiceCommandTypeString(subcommand);
		break;
	case PACKET_TYPE_MAIN_SERVICE_INFO_GET:
		retString =getMainServiceInfoGetTypeString(subcommand);
		break;
	case PACKET_TYPE_MAIN_SERVICE_INFO_SET:
		retString =getMainServiceInfoSetTypeString(subcommand);
		break;
	case PACKET_TYPE_PROCESS_OBJECT_COMMAND:
		retString =getProcessObjectCommandTypeString(subcommand);
		break;
	case PACKET_TYPE_PROCESS_OBJECT_INFO_GET:
		retString =getProcessObjectInfoGetTypeString(subcommand);
		break;
	case PACKET_TYPE_PROCESS_OBJECT_INFO_SET:
		retString =getProcessObjectInfoSetTypeString(subcommand);
		break;
	case PACKET_TYPE_SERVICE_OBJECT_COMMAND:
		retString =getServiceObjectCommandTypeString(subcommand);
		break;
	case PACKET_TYPE_SERVICE_OBJECT_INFO_GET:
		retString =getServiceObjectInfoGetTypeString(subcommand);
		break;
	case PACKET_TYPE_SERVICE_OBJECT_INFO_SET:
		retString =getServiceObjectInfoSetTypeString(subcommand);
		break;
	case PACKET_TYPE_SERVICE_COMMAND:
		retString =getServiceCommandTypeString(subcommand);
		break;
	}
	return retString;
}
CString WinServiceTypeInterpreter::GetCommandTypeString(PacketType type)
{
	CString retString=_T("");
	switch(type)
	{
	case PACKET_TYPE_NULL:
		retString =_T("NULL");
		break;
	case PACKET_TYPE_MAIN_SERVICE_COMMAND:
		retString =_T("MainServiceCommand");
		break;
	case PACKET_TYPE_MAIN_SERVICE_INFO_GET:
		retString =_T("MainServiceInfoGet");
		break;
	case PACKET_TYPE_MAIN_SERVICE_INFO_SET:
		retString =_T("MainServiceInfoSet");
		break;
	case PACKET_TYPE_PROCESS_OBJECT_COMMAND:
		retString =_T("ProcessObjectCommand");
		break;
	case PACKET_TYPE_PROCESS_OBJECT_INFO_GET:
		retString =_T("ProcessObjectInfoGet");
		break;
	case PACKET_TYPE_PROCESS_OBJECT_INFO_SET:
		retString =_T("ProcessObjectInfoSet");
		break;
	case PACKET_TYPE_SERVICE_OBJECT_COMMAND:
		retString =_T("ServiceObjectCommand");
		break;
	case PACKET_TYPE_SERVICE_OBJECT_INFO_GET:
		retString =_T("ServiceObjectInfoGet");
		break;
	case PACKET_TYPE_SERVICE_OBJECT_INFO_SET:
		retString =_T("ServiceObjectInfoSet");
		break;
	case PACKET_TYPE_SERVICE_COMMAND:
		retString =_T("ServiceCommand");
		break;
	}
	return retString;
}