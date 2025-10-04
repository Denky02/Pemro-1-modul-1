A =  400000
diskon_A = 13
nilai_diskon_A = A*diskon_A/100
harga_diskon_A = A-nilai_diskon_A

B =  350000
diskon_B = 21
nilai_diskon_B = B*diskon_B/100
harga_diskon_B = B-nilai_diskon_B

print(f'Harga sepatu A adalah {A}\n\nHarga sepatu B adalah {B}\n')
print(f'Sepatu A mendapat diskon 13% sehingga harganya menjadi {harga_diskon_A:.0f}\n')
print(f'Sepatu B mendapat diskon 21% sehingga harganya menjadi {harga_diskon_B:.0f}')