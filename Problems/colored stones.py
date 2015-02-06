fac = []
for i in range(50):
	fac.insert(i, 0)

def fact(n):
	h = fac[n];
	if h:
		return h
	if n == 1:
		return 1
	h = n * fact(n - 1)
	fac[n] = h
	return h
	
n = 0
n = input()

print fact(n) + 1
