# d.get_kill_stone_count()
A função **d.get_kill_stone_count** informa количество разрушенных игроками камней метина за всё время нахождения na masmorra.

## Parâmetros da função
### empty_parameter1
Tipo *number*. **Parâmetro obrigatório**. Parâmetro que não afeta nada (possivelmente um bug).

### empty_parameter2
Tipo *number*. **Parâmetro obrigatório**. Parâmetro que não afeta nada (possivelmente um bug).

## Valores de retorno
### kill_count
Tipo *number*. Количество разрушенных камней метина. Se параметры [empty_parameter1](#empty_parameter1) и [empty_parameter2](#empty_parameter2) не определены, не являются числами ou se функция вызвана вне подземелья, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.

В качестве параметров необходимо указать совершенно любые числа, например `d.get_kill_stone_count(1, 1)`. Эти параметры ни на что не повлияют, но se их не указать, então функция вернет `0`. Это баг.

Esta função funciona apenas em masmorras.