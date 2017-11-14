#include <syslog.h>
#include <stdio.h>

int main(int argc,char *argv[])
{


printf("writing log\n");
openlog ("testProg", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);

syslog (LOG_MAKEPRI(LOG_LOCAL1, LOG_NOTICE), "Program started by User %d", 1);
syslog (LOG_INFO, "A tree falls in a forest");

closelog ();
return 0;
}
