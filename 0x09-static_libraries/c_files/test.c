#include "main.h"

/**
*Return: string
*/
char *cap_string(char *s){
    
	int i = 0, isSpecial, currPoint, isLetter;
	while(*(s + i) != '\0'){
        
	currPoint = (int) *(s + i);
	isLetter = *(s + i + 1) >= 'a' && *(s + i + 1) <='z';
	isSpecial = spacing(currPoint);
        
	if(*(s + 0) >= 'a' && *(s + 0) <='z'){
	*(s + 0) = *(s + 0) - 32;
	}
	else if(*(s + i) ==' ' && isLetter ){
	*(s + i + 1) = *(s + i + 1) - 32;
	}else if (isLetter && (*(s + i) == '\t' || *(s + i) == '\n')){
	*(s + i + 1) = *(s + i + 1) - 32;
	}else if (isLetter && isSpecial == 1){
	*(s + i + 1) = *(s + i + 1) - 32;
	}
        
	// if(*(s + i) >= 'a' && *(s + i) <='z')
	// {
	//   *(s + i) =  *(s + i) - 32;
	// }
	i++;
	}
	return s;
    
}

int spacing(int i){
    
	switch(i){
	case 46: 
	return 1;
	break;
	case 59: 
	return 1;
	break;
	case 44: 
	return 1;
	break;
	case 33: 
	return 1;
	break;
	case 63: 
	return 1;
	break;    
	case 34: 
	return 1;
	break;  
	case 40: 
	return 1;
	break;     
	case 41: 
	return 1;
	break;
	case 123: 
	return 1;
	break;
	case 125: 
	return 1;
	break;
	default:
	return 0;
	}
}
