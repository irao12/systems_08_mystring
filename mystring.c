//Ivan Rao

#include <stdio.h>
#include <string.h>

int mystrlen(char *s){
  int len = 0;
  while (*s){
    len++;
    s++;
  }
  return len;
}

char * mystrcpy( char *dest, char *source ){
  int srclen = mystrlen(source);
  int i;
  for (i = 0; i < srclen; i++){
    dest[i] = source[i];
  }
  return dest;
}

char * mystrncpy( char *dest, char *source, int n){
  int i;
  for (i = 0; i < n; i++){
    if (source[i]){ dest[i] = source[i];
    }
    else dest[i] = 0;;
  }
  return dest;
}

char * mystrcat( char *dest, char *source ){
  int start = mystrlen(dest);
  int srclen = mystrlen(source);
  int i;
  for (i = 0; i < srclen; i++){
    dest[start+i] = source[i];
  }
  dest[start+i] = 0;

  return dest;
}

char * mystrncat( char *dest, char *source, int n){
  int start = mystrlen(dest);
  int i;
  for (i = 0; i < n; i++){
    dest[start+i] = source[i];
  }
  dest[start+i] = 0;

  return dest;
}

int mystrcmp( char *s1, char *s2 ){
  int result;
  int i = 0;
  while (s1[i] == s2[i]){
    if (!s1[i]) return 0;
    i++;
  }
  return (s1[i] - s2[i]);
}

char * mystrchr( char *s, char c ){
    int len = mystrlen(s);
    int i;
    for (i = 0; i<=len; i++){
      if (s[i] == c) return (s+i);
    }
    return NULL;
}

int main (){
  char s1[256] = "apple";
  char s2[256] = "banana";
  char s3[256] = "applegate";
  char s4[256] = "apple";

  printf("%d", mystrcmp(s3,s1));
}
