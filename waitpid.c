
/*
  int waitpid(int pid, int *status, int options);

  Parametri:
  PID
  - < -1 attende la terminazione di un qualunque processo figlio il cui PGID
      ( id di process group) è uguale al valore assoluto del parameto ES:
      -5764 indica che il process group è 5764
  - -1 attende la terminazione di qualunque processo figlio analogamente alla wait();
  -  0 attende un qualunque processo figlio il cui PGID è uguale a quello del processo comando
  - > 0 attende la terminazione di uno specifico processo con valore di pid
*/
#include<sys/wait.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
int main(){
  int pid, pid1, pid2, status,x;
  srand(time(NULL));
  pid1=fork();
  if(pid1==0){
    printf("1) sono il primo processo  figlio con pid: %d \n", getpid());
    sleep(14);
    exit(1);
  }else{
    pid2=fork();
    if(pid2==0){
      printf("2) sono il secondo processo figlio con pid: %d \n",getpid());
      sleep(1);
      exit(2);
    }else{
      printf("3) padre in attesa del figlio più lento \n");
      pid=waitpid(pid1, &status, 0);
      printf("4) finalmente termina il figlio con il pid: %d\n", pid);
      return 0;
    }
  }
}
