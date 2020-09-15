#Pede para o usuário digitar uma senha e valida ela com a senha secreta
#Cria uma variável para guardar a senha
senha_secreta = '123456'

#Pede para o usuário digitar sua senha
senha = input ('Informe sua senha:')

#Verifica se a senha do usuário esta correta
if senha == senha_secreta:
  print('Bem vindo Hackerman')

else:
  print('Acesso negado!')
