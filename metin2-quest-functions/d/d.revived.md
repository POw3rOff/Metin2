# d.revived()
A função **d.revived** verifica se поднимался ли кто-нибудь из участников подземелья после смерти ou нет.

## Parâmetros da função
### empty_parameter1
Tipo *number*. **Parâmetro obrigatório**. Parâmetro que não afeta nada (possivelmente um bug).

### empty_parameter2
Tipo *number*. **Parâmetro obrigatório**. Parâmetro que não afeta nada (possivelmente um bug).

## Valores de retorno
### was_revived
Tipo *boolean*. Воскресал ли кто-нибудь из игроков. `true`, se да, и `false`, se нет. Также é retornado `true` в случаях, se один из параметров não foi definido ou não for um número, а также se функция была вызвана вне подземелья.

## Notas
A função pode ser chamada anonimamente.

В качестве параметров необходимо указать совершенно любые числа, например `d.revived(1, 1)`. Эти параметры ни на что не повлияют, но se их не указать, então функция вернет `true`.

Se быть более точным, então функция начнет возвращать `true`, se один из участников умрет, а затем поднимется. Чтобы функция не возвращала `true`, умерший игрок должен покинуть подземелье.

Esta função funciona apenas em masmorras.