#include<stdio.h>

main(){
	int var, *p_var;
	p_var = &var;
	var = 500;
	p_var++;
	printf("\n%d", var);
	printf("\n%d", p_var);
}
