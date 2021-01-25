#include<sys/wait.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#define NRFIGLI 4
int main(){
  int status, pid, x;
  for(x=0;x<NRFIGLI;x++){
    pid=fork();
    if(pid==0){
      printf(" Sono il figlio, il mio pid e': %d. ",getpid());
      printf(" il processo padre ha pid: %d\n",getppid());
      exit(0);
    }else{
      printf(" Sono il padre, il mio pid e': %d ",getpid());
      printf(" il pid del figlio corrente e': %d \n", pid);
      printf(" L'exit di mio figlio (%d) e': %d\n\n",wait(&status), status);
    }
  }
}
