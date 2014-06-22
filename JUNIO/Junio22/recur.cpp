int cociente(int num1, int num2){	
	if(num1<num2){
		return 0;
	}else{
		return 1+cociente(num1-num2,num2);
	}
} 
int fact(int num){
	if (num==0){
		return 1;
	}else{
		return num*fact(num-1);
	}
} 

int producto(int num1, int num2){	
	if(num1==0 || num2==0){
	    return 0;
	}else{
            return num1+producto(num1,num2-1);
	}

} 

int suma(int num1,int num2){
	int result;
	if(num2==0)
		return num1;
	else if(num1==0)
		return num2;
	else{
		return 1+suma(num1,num2-1);
	}
} 