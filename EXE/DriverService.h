#ifndef _SHADOW_SERVICE_H_
#define _SHADOW_SERVICE_H_


VOID    StartDriverService(IN LPCTSTR szServiceName, IN LPCTSTR szSysFilePath);
VOID    DeleteDriverService(IN LPCTSTR szServiceName);


#endif  /* _SHADOW_SERVICE_H_ */