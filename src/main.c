#include <stdio.h>
#include "trace.h"

int main(void)
{
    int i;

	TRACE("Start");
	
	for(i=0;i<10;i++)
	{
		TRACE("%d",i);
	}
	TRACE("End");
}
