# d.unique_get_hp_perc()
A função **d.unique_get_hp_perc** retorna количество процентов здоровья у уникального um monstro.

## Parâmetros da função
### unique_name
Tipo *string*. **Parâmetro obrigatório**. Nome do monstro único.

## Valores de retorno
### hp_percentage
Tipo *number*. Количество процентов оставшегося здоровья у um monstro. Se параметр [unique_name](#unique_name) не является строкой, se монстр с таким именем не найден ou se функция вызвана вне подземелья, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.

Esta função funciona apenas em masmorras.