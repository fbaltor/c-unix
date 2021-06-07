#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

void err_sys(const char *message, int fd) {
  printf(message, fd);
  exit(0);
}
void err_quit(const char *message) {
  printf("%s", message);
  exit(0);
}

int main(int argc, char *argv[]) {
  DIR *dp;
  struct dirent *dirp;

  if (argc != 2) {
    char *message = "usage: ls directory_name";
    err_quit(message);
  }

  if ((dp = opendir(argv[1])) == NULL)
    err_sys("can’t open %s", argv[1]);

  while ((dirp = readdir(dp)) != NULL)
    printf("%s\n", dirp->d_name);
  closedir(dp);

  exit(0);
}
