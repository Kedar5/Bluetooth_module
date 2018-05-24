////////////////////////////////////////////////////////////////////////////////////
//  Project Name : BLUETOOTH
//
//  Target Board : atmega8
//
//  Date Created : 1/21/2017 10:00:32 AM
// 
//  Online Resource  : www.electronicsforstudents.com
///////////////////////////////////////////////////////////////////////////////////

#include<avr/io.h>
#include<util/delay.h>
#include"serial.h"
#include"bluetooth.h"


int main()
{
serial_init(9600);       // doesnt work if its not done
char data[10];

	while (1)
	{
		bluetooth_read(data,3);
		
		if(compare(data,"onn")==1)
		{
		    write(portb,all,h);
		}
	    if(compare(data,"off")==1)
		{
		    write(portb,all,l);
		}
	    if(compare(data,"0")==1)
        {    
    	    write(portb,value,0);
		}
		if(compare(data,"1")==1)
        {    
    	    write(portb,value,1);
		}
		if(compare(data,"2")==1)
        {    
    	    write(portb,value,2);
		}
		if(compare(data,"3")==1)
        {    
    	    write(portb,value,3);
		}
	    if(compare(data,"4")==1)
        {    
    	    write(portb,value,4);
		}
		if(compare(data,"5")==1)
        {    
    	    write(portb,value,5);
		}
		if(compare(data,"6")==1)
        {    
    	    write(portb,value,6);
		}
		if(compare(data,"7")==1)
        {    
    	    write(portb,value,7);
		}
	    if(compare(data,"8")==1)
        {    
    	    write(portb,value,8);
		}
		if(compare(data,"9")==1)
        {    
    	    write(portb,value,9);
		}
		if(compare(data,"10")==1)
        {    
    	    write(portb,value,10);
		}
	}
}