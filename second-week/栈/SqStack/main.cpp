#include "../head/SqStack.h"
#include "SqStack.cpp"
int main()
{
	int top,len,data;
	char str;
	SqStack sq;	
	screen();
	str=inputStr();
	while(1)
    {	
    	switch(str)
   		{
    		case 'a':
    			data=initStack(&sq);
    			conti();   
    			str=inputStr();
    			break;
    		case 'b':
    			destroyStack(&sq);
    			conti();
    			str=inputStr();
    			break;
    		case 'c':
    			isEmptyStack(&sq); 
				conti();
				str=inputStr();
    			break;
    		case 'd':
    			getTopStack(&sq,&data);
				conti();
				str=inputStr();
				break;
    		case 'e':
    			stackLength(&sq,&len);
    			conti();
    			str=inputStr();
    			break;
    		case 'f':
    			pushStack(&sq);
    			conti();
    			str=inputStr();
    			break;
    		case 'g':
    			popStack(&sq);
    			conti();
    			str=inputStr();
    			break;
    		case 'h':
    			clearStack(&sq);
    			conti();
    			str=inputStr();
    			break;
    		case 'i':
    			visitStack(&sq);
    			conti();
    			str=inputStr();
    			break;
    		case 'j':
    			exit(0);	 		
		}
 	}
	return 0;
	 
} 
