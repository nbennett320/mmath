const double MM_E = 2.7182818284590452353602874713526;
const double MM_PI = 3.1415926535897932384626433832795;

// factorial, calculate n!
long int MM_factorial(int n) {
  long int f = 1;
  for(int i = 1; i <= n; i++) {
    f *= i;
  }
  return f;
}

// exponential function, calculate x^y
int MM_pow(int x, unsigned int y) {
  if (y == 0)
    return 1;
  else if (y%2 == 0)
    return pow(x, y/2)*pow(x, y/2);
  else
    return x*pow(x, y/2)*pow(x, y/2);
}

// taylor estimation of e^x
double MM_exp(int x) {
  double ex = 1;
  for(int i = 1; i < x; i++) {
    ex += ( pow(x, i) / factorial(i) );
  }
  return ex;
}

// simple sigmoid function
double MM_sigmoid(double x) {
  return ( exp(x) / ( exp(x) + 1 ) );
}
