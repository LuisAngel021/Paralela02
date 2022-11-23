#cython: language_level=3

def obtener_caracter_hexadecimal(valor):
# Lo necesitamos como cadena
	
	equivalencias = {
	10: "a",
	11: "b",
	12: "c",
	13: "d",
	14: "e",
	15: "f",
	}
	if valor in equivalencias:
		return equivalencias[valor]
	else:
		return str(valor)

def iniciar(decimal):
	return decimal_a_hexadecimal(decimal)
	
cdef str decimal_a_hexadecimal(float decimal):
	cdef str hexadecimal = ""
	cdef double residuo
	cdef str verdadero_caracter = ""
	while decimal > 0:
		residuo = decimal % 16
		verdadero_caracter = obtener_caracter_hexadecimal(residuo)
		hexadecimal = verdadero_caracter + hexadecimal
		decimal = int(decimal / 16)
	return hexadecimal
