power = []

for a in range(2,101):
	for b in range(2,101):
		n = a**b
		if n in power:
			continue;
		else:
			power.append(n)

print len(power)
