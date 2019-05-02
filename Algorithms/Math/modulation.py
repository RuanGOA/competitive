#modular sum
#(a + b) % m
def ms(a, b, m):
  return (((a % m) + (b % m)) % m)

#modular multiplication
#(a * b) % m
def mm(a, b, m):
  return (((a % m) * (b % m)) % m)

#modular division
#(a / b) % m
def md(a, b, m):
  return (((a % m) / (b % m)) % m)

#modular exponentiation
#(a^b) % m
def me(a, b, m):
  return (((a % m)**b) % m)

#fast exponentiation -> O(logv2(b))
def fastExp(int n, int e):
  if(e == 0) return 1
  if(e == 1) return n
  if(e % 2 == 0) return n * fastExp(n, e-1)
  aux = fastExpo(n, e/2)
  return aux * aux
  
#fast modular exponentiation
def fastExp(n, e, m):
  if(e == 0) return 1 % m
  if(e == 1) return n % m
  if(e % 2 == 0) return mm(n, fastExp(n, e-1), m)
  aux = fastExpo(n, e/2)
  return mm(aux, aux, m)
