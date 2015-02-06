n = 0
a = 0
b = 0
c = 0
v = []
n = input()
for i in range(n):
	s = raw_input()
	a = int(s.split(" ")[0])
	b = int(s.split(" ")[1])
	c = int(s.split(" ")[2])
	v.append((a + b) * c)
	v.append((a + c) * b)
	v.append((b + c) * a)
	v.append(a * c + b)
	v.append(a * b + c)
	v.append(b * c + a)
	print str(min(v)) + " " + str(max(v))
	v[:] = []


