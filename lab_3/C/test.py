a = [210, 2, 150, 73, 0, 0, 0, 0]
num = 0
p = 0
for i in a:
    num += (256**p) * i
    p+=1

print(num)