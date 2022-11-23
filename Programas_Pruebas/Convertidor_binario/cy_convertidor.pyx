#cython: language_level=3

cimport cython
"""Convertidor de decimal a binario"""
def cy_binario(decimal):
	binario=''
	while decimal //2 !=0:
		binario=str(decimal%2)+binario
		decimal=decimal//2
	return str(decimal)+binario
