#include <stdio.h>
#include <stdlib.h>

int main(){
printf(" 1.	Date \n 2.	display used in subdirectory \n 3.	touch - create file \n 4.	mkdir - create file \n 5.	cal -  display calender \n 6.	rmdir - delete directory \n 7.	ls - list of all files in directory \n 8.	lscpu -  cpu architecture \n 9.	unzip filename.zip -  unzip file \n 10.	whoami \n 11.	sudo lshw - hardware information \n 12.	df - disk usage information \n 13.	uptime - how long system has been running \n 14.	uname - view information about system \n 15.	ps -A - view running processes \n"
);

printf("Enter an input: ");

int n;
scanf("%d", &n);

switch (n) {
    case 1: system("date"); break;
    case 2: system("du"); break;
    case 3: system("touch"); break;
    case 4: system("mkdir"); break;
    case 5: system("cal"); break;
    case 6: system("rmdir"); break;
    case 7: system("ls"); break;
    case 8: system("lscpu"); break;
    case 9: system("unzip filename.zip"); break;
    case 10: system("whoami"); break;
    case 11: system("sudo lshw"); break;
    case 12: system("df"); break;
    case 13: system("uptime"); break;
    case 14: system("uname"); break;
    case 15: system("ps"); break;
}

}
