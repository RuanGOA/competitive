def primeFactors(n):
  factors = []
  index = 0
  PF = primes[index]
  while(n != 1 and (PF * PF <= n)):
    while(n % PF == 0):
      n /= pf
      factor.append(PF)
    index += 1
    pf = primes[index]
    if n != 1:
    factor.append(n);
  return factors
