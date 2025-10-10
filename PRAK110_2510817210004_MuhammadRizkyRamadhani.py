import math

alas = 5
tinggi = 12
miring = math.sqrt(alas**2 + tinggi**2)
keliling_segitiga = alas+tinggi+miring
luas_segitiga = 0.5 * alas * tinggi

print(f"""
Diketahui :
Alas = {alas} cm 
Tinggi = {tinggi} cm\n\n
Jawab :
Sisi A = {tinggi} cm 
Sisi B = {miring:.0f} cm 
Sisi C = {alas} cm 
Keliling = {keliling_segitiga:.0f} cm 
Luas = {luas_segitiga:.0f} cm
""")




