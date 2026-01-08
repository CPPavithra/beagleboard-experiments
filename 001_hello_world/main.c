#include <stdio.h>
#include <time.h>

int main(){
  time_t t= time(NULL);
  struct tm *time_info= localtime(&t);

  char datetime[26];//std buffer size for dates is 26
  strftime(datetime, 26, "%Y-%m-%d", time_info);

  printf("Name: Pavithra CP\n");
  printf("Username: CPPavithra\n");
  printf("Date: %s\n", datetime);

  return 0;
}
