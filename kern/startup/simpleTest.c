

#include <types.h>
#include <lib.h>
//#include <stdio.h>
#include <test.h>
#include "simpleTest.h"




int simpleTest(int narags, char ** args){
	
	int i = 0;
	if(narags == 1)
	{
	  kprintf("You only have one  argument. You suck.\n");
	}else if(narags > 1 && narags < 4){
		kprintf("Here's your arguments: \n");
		
		for(i = 0; i < narags; i++ ){
		   kprintf("%s", args[i]);
		}
	 	kprintf("\n");
	}else{
	 kprintf("You have too many arguments. You suck\n");
	}
	return 0;
}
	

