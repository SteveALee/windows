///////////////////////////////////////////////////////////////////////////////
//
// FlowManager.h
//
// Access to the GPII flowmanager to log in and out
//
//	Project Files:
//		FlowManager.cpp
//		FlowManager.h
//
///////////////////////////////////////////////////////////////////////////////
#ifndef _FLOWMANAGER_H_
#define __FLOWMANAGER_H_

void FlowManagerLogin(const char * szToken);
void FlowManagerLogout(const char * szToken);

#endif // __FLOWMANAGER_H_
