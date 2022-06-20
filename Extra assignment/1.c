void print(int, int);

int main()
{
  int n;

  scanf("%d", &n);

  print(1, n);

  return 0;
}

void print(int s, int n) {
  if (s > n)
    return;

  printf("%d\n", s);

  print(++s, n);
}