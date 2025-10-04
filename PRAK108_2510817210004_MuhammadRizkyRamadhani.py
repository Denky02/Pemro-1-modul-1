import math
berapa_putaran = 5
berapa_km = 14
jarak_satu_putaran = berapa_km/berapa_putaran
keliling_taman = jarak_satu_putaran
r = float(keliling_taman/(2* math.pi))

print(f"""
Diketahui :\n
Pak Dengklek mengelilingi taman = {berapa_putaran} Putaran\n
Jarak tempuh Pak Dengklek = {berapa_km} Kilometer\n\n
Jawaban :\n
Jari-jari taman yang dikelilingi Pak Dengklek adalah {r:.2f} Kilometer 
""")