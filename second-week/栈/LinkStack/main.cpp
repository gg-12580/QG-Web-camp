#include "../head/LinkStack.h"
#include "LinkStack.cpp"
int main()
{
	char str;
	LinkStack S;	
	screen();
	str=inputStr();
	while(1)
    {	
    	switch(str)
   		{
    		case 'a':
    			initStack(S);
    			conti();   
    			str=inputStr();
    			break;
    		case 'b':
    			destroyStack(S);
    			conti();
    			str=inputStr();
    			break;
    		case 'c':
    			isEmptyStack(S); 
				conti();
				str=inputStr();
    			break;
    		case 'd':
    			getTopStack(S);
				conti();
				str=inputStr();
				break;
    		case 'e':
    			stackLength(S);
    			conti();
    			str=inputStr();
    			break;
    		case 'f':
    			pushStack(S);
    			conti();
    			str=inputStr();
    			break;
    		case 'g':
    			popStack(S);
    			conti();
    			str=inputStr();
    			break;
    		case 'h':
    			clearStack(S);
    			conti();
    			str=inputStr();
    			break;
    		case 'i':
    			visitStack(S);
    			conti();
    			str=inputStr();
    			break;
    		case 'j':
    			exit(0);	 		
		}
 	}
	return 0;
	 
} 
