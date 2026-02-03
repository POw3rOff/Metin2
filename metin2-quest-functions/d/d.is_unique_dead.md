# d.is_unique_dead()
A função **d.is_unique_dead** verifica se мертв ли уникальный монстр.

## Parâmetros da função
### unique_name
Tipo *string*. **Parâmetro obrigatório**. Nome do monstro único

## Valores de retorno
### is_dead
Tipo *boolean*. `true`, se монстр мертв, а `false` &mdash; se жив. Также `false` é retornado в случаях, se параметр [unique_name](#unique_name) не является строкой ou se функция была вызвана вне подземелья. `true`, se уникального um monstro с таким именем não existe.

## Notas
A função pode ser chamada anonimamente.

A função funciona apenas em masmorras.