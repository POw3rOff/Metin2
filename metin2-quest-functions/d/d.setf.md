# d.setf()
A função **d.setf** cria флаг, который будет существовать в течение одной сессии na masmorra.

## Parâmetros da função
### flag_name
Tipo *string*. **Parâmetro obrigatório**. Nome da flag. Nome da flag не может быть длиннее максимально-por exemploой длины поля szState в таблице player.quest.

### value
Tipo *number*. **Parâmetro obrigatório**. Valor da flag.

## Notas
A função pode ser chamada anonimamente.

Флаг будет обнулен после того, как все игроки выйдут из подземелья.

Esta função funciona apenas em masmorras.