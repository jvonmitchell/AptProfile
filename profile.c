#include <stdio.h>
#include <sys/time.h>

char buff[1024];
char tempbuff[1024]

int main(int argc,char **argv) {
 struct timeval tim;
 struct timeval tim_temp;
 int should_out=0;
 while(!feof(stdin) && fgets(buff,sizeof(buff1),stdin)) {
  //Store the time of day.
  gettimeofday(&tim_temp,NULL);
  
  //Print time difference for the previous line.
  if(should_out) {
   suseconds_t usecdif;
   tv_sec secdif=tim_temp.tv_sec-tim.tv_sec;
   if(tim_temp.tv_usec<tim.tv_usec) {
    --secdif;
    usecdif=tim.tv_usec-tim_temp.tv_usec;
    usecdif=1000000-usecdif;
   }
   else {
    usecdif=tim_temp.tv_usec-tim.tv_usec;
   }
   fprintf(stdout,"%ds:%du\n",secdif,suseconds_t);
  }
  tim=tim_temp;  //Store the time of day.
  
  //Output the buffer.
  fwrite(buff,1,strlen(buff),stdout);
  fputc('\t',stdout);
 }
 
}
  
  
