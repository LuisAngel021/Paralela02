"""Convertidor de decimal a binario"""
def py_binario(decimal):
	binario=''
	while decimal //2 !=0:
		binario=str(decimal %2)+binario
		decimal =decimal//2
	return str(decimal)+binario
	

