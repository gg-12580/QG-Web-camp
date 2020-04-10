#include "../head/LQueue.h"
#include "LQueue.cpp"
int main()
{
	char str;
	LinkQueue s;
	screen();
	str=inputStr();
	while(1)
    {	
    	switch(str)
   		{
    		case 'a':
    			InitLQueue(s);
    			conti();   
    			str=inputStr();
    			break;
    		case 'b':
    			DestoryLQueue(s);
    			conti();
    			str=inputStr();
    			break;
    		case 'c':
    			IsEmptyLQueue(s); 
				conti();
				str=inputStr();
    			break;	
    		case 'd':
    			GetHeadLQueue(s);
				conti();
				str=inputStr();
				break;
    		case 'e':
    			LengthLQueue(s);
    			conti();
    			str=inputStr();
    			break;
    		case 'f':
    			EnLQueue(s);
    			conti();
    			str=inputStr();
    			break;
    		case 'g':
    			DeLQueue(s);
    			conti();
    			str=inputStr();
    			break;
    		case 'h':
    			ClearLQueue(s);
    			conti();
    			str=inputStr();
    			break;
    		case 'i':
    			TraverseLQueue(s);
    			conti();
    			str=inputStr();
    			break;
    		case 'j':
    			exit(0);	 		
		}
 	}
	return 0;	 
} 
