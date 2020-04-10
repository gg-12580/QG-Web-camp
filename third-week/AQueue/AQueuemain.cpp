#include "../head/AQueue.h"
#include "AQueue.cpp"
int main()
{
	char str;
	AQueue s;
	screen();
	str=inputStr();
	while(1)
    {	
    	switch(str)
   		{
    		case 'a':
    			InitAQueue(&s);
    			conti();   
    			str=inputStr();
    			break;
    		case 'b':
    			DestoryAQueue(&s);
    			conti();
    			str=inputStr();
    			break;
    		case 'c':
    			IsEmptyAQueue(&s); 
				conti();
				str=inputStr();
    			break;
    		case 'd':
     			IsFullAQueue(&s); 
				conti();
				str=inputStr();
    			break;				
    		case 'e':
    			GetHeadAQueue(&s);
				conti();
				str=inputStr();
				break;
    		case 'f':
    			LengthAQueue(&s);
    			conti();
    			str=inputStr();
    			break;
    		case 'g':
    			EnAQueue(&s);
    			conti();
    			str=inputStr();
    			break;
    		case 'h':
    			DeAQueue(&s);
    			conti();
    			str=inputStr();
    			break;
    		case 'i':
    			ClearAQueue(&s);
    			conti();
    			str=inputStr();
    			break;
    		case 'j':
    			TraverseAQueue(&s);
    			conti();
    			str=inputStr();
    			break;
    		case 'k':
    			exit(0);	 		
		}
 	}
	return 0;	 
} 
