#include <stdio.h>

// strlen()
int mystrlen( char *s ) {
  int i = 0;
  while (s[i]) {
    i++;
  }
  return i;
}

// strcopy()
char * mystrcpy( char *dest, char *source ) {
  int i = 0;
  while (source[i]) {
    dest[i] = source[i];
    i++;
  }
  return dest;
}

// strncopy()
char * mystrncpy( char *dest, char *source, int n) {
  int i = 0;
  while (source[i]) {
    if (i == n) break;
    dest[i] = source[i];
    i++;
  }
  return dest;
}

//strcat()
char * mystrcat( char *dest, char *source ) {
  int i = 0;
  while (source[i]) {
    dest[mystrlen(dest) - 1 + i] = source[i];
    i++;
  }
  return dest;
}

// strncat()
char * mystrncat( char *dest, char *source, int n) {
  int i = 0;
  while (source[i]) {
    if (i == n) break;
    dest[mystrlen(dest) + i] = source[i];
    i++;
  }
  return dest;
}

// strcmp()
int mystrcmp( char *s1, char *s2 ) {
  int i = 0;
  while (s1[i] && s2[i] && (s1[i] == s2[i])) {
    i++;
  }
  if (s1[i] > s2[i]) return 1;
  else if (s1[i] < s2[i]) return -1;
  else return 0;
}

// strchr()
char * mystrchr( char *s, char c ) {
  if (c == 0) return (s + mystrlen(s));

  int i = 0;
  while (s[i]) {
    if (s[i] == c) return (s + i);
    i++;
  }
  return 0;
}
