#include "wsh.h"
int main(char **argv, int argc)
{
        char command[MAX_BUFF];
        char **argv_com;
 
#ifdef TEST
        printf("\nPointer address [main] %p\n", (void *) argv_com);
        printf("\nPointer address [main] %p\n", (void *) *argv_com);
#endif
	while(TRUE)
	{
		print_inv();
		read_command_line(command);
		calc_len(command);
		init_buff(&argv_com);	
		//analysis_command_v2(command, &argv_com, string_len);
		//run_command(argv_com);
                //break;
	}
        free_buff(command, (char **)argv_com);
	return 0;
}
