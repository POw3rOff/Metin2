# d.get_unique_vid()
A função **d.get_unique_vid** informa VID уникального um monstro.

## Parâmetros da função
### unique_name
Tipo *string*. **Parâmetro obrigatório**. Nome do monstro único.

## Valores de retorno
### mob_vid
Tipo *number*. VID уникального um monstro. Se параметр [unique_name](#unique_name) не является строкой, se функция вызвана вне подземелья ou se уникальный монстр с таким именем не найден, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.

Esta função funciona apenas em masmorras.