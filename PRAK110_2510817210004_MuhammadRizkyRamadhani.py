import math

a = 5
b = 12
c = math.sqrt(a**2 + b**2)
keliling_segitiga = a+b+c
luas_segitiga = 0.5 * a * b

print(f"""
Diketahui :
Alas = {a} cm 
Tinggi = {b} cm\n\n
Jawab :
Sisi A = {a} cm 
Sisi B = {b} cm 
Sisi C = {c:.0f} cm 
Keliling = {keliling_segitiga:.0f} cm 
Luas = {luas_segitiga:.0f} cm
""")




