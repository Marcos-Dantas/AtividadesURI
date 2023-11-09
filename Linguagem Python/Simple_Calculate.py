## beecrowd | 1010

line1 = input().split()
line2 = input().split()

print(f'VALOR A PAGAR: R$ {"%.2f" % ((int(line1[1]) * float(line1[2])) + (int(line2[1]) * float(line2[2])))}')