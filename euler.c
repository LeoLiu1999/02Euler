long euler15(long a, long b){
  return factorial(a+b) / (factorial(a) * factorial(b));
}

long factorial(long n){
  if(n < 2){
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main(){
  printf("%ld \n",euler15(20, 20));
  // should be 137846528820, or 40 choose 20. having trouble with long
  //printf("%ld",euler());
  return 0;
}
