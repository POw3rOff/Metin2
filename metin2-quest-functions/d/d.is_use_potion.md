# d.is_use_potion()
A função **d.is_use_potion** verifica se использовал ли кто-нибудь из участников подземелья зелья за весь подъем.

## Parâmetros da função
### empty_parameter1
Tipo *number*. **Parâmetro obrigatório**. Parâmetro que não afeta nada (possivelmente um bug).

### empty_parameter2
Tipo *number*. **Parâmetro obrigatório**. Parâmetro que não afeta nada (possivelmente um bug).

## Valores de retorno
### was_used
Tipo *boolean*. Было ли использовано зелье. `true`, se да, и `false`, se нет. Также é retornado `true` в случаях, se один из параметров não foi definido ou não for um número, а также se функция была вызвана вне подземелья.

## Notas
A função pode ser chamada anonimamente.

В качестве параметров необходимо указать совершенно любые числа, например `d.is_use_potion(1, 1)`. Эти параметры ни на что не повлияют, но se их не указать, então функция вернет `true`. Это баг.

Неизвестно, при использовании каких именно предметов функция начнет возвращать `true`.

Esta função funciona apenas em masmorras.