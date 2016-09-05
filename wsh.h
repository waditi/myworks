#ifndef WSH_H
#define WSH_H

#define TRUE 1
#define FALSE 0

#define MAX_BUFF 4096

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

//#define TEST

static unsigned int string_len;

static unsigned int argc_com;
static unsigned int argv_com_len;

void init_buff(char ***);
void free_buff(char *, char **);
void print_inv(void);
void read_command_line(char *);
void analysis_command(char *, char ***);
void analysis_command_v2(char *, char ***, unsigned int *);
void calc_len(char *command);

void run_command(char **);

#endif
