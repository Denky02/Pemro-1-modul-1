sisi_a = 4
sisi_b = 5
sisi_c = 7
keliling = sisi_a + sisi_b + sisi_c
harga_tanah_permeter = 85000
Total_biaya = keliling * harga_tanah_permeter

print(f"""
Diketahui :
Panjang sisi segitiga berturut-turut adalah {sisi_a}, {sisi_b}, dan {sisi_c}
Keliling Tanah Pak Dengklek adalah {keliling} meter
Harga tanah Per Meter adalah Rp {harga_tanah_permeter:,}
Jawaban :
Biaya yang diperlukan Pak Dengklek adalah : Rp {Total_biaya:,}
""")