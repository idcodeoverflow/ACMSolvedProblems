def valid(n):
	if(n >= 0 and n <= 255):
		return True;
	return False;

def validIp(v):
	for i in v:
		if(not valid(int(i))):
			return False
	return True;
	
v = []
t = input()
try:
	while(t):
		st = raw_input()
		v = st.split(".")
		t = t - 1
		if(len(v) != 4 and len(v) != 6):
			print "NO\n"
		else:
			if(validIp(v)):
				print "SI\n"
			else:
				print "NO\n"
except val:
	print "NO\n"

