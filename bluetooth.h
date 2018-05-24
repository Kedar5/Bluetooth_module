
#ifndef BLUETOOTH_H
#define BLUETOOTH_H

void bluetooth_read(char *msg,unsigned char length)
{

    while(serialdata_available()<length);	
	UReadBuffer(msg,length);
	
}


int str_num(char *_buffer)
{

return atoi(_buffer);

}




#endif