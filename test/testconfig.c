#include <stdio.h>
#include "appconfig.h"
int main(int argc, char *argv[]){
	xmlNodePtr reqNode = NULL;
	xmlNodePtr reqEle = NULL;
	char value[256] = {0x00};
	appconfig_p myconfig = appconfig_init();
	appconfig_open(myconfig, "test.xml");
	if(appconfig_getvalue(myconfig, "module1", "element1", value)==0){
		printf("value for %s of module %s is %s\n", "element1", "module1", value);
	}
	appconfig_close(myconfig);
	return 0;
}
