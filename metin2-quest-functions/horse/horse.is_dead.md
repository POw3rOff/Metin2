# horse.is_dead()
Функция **horse.is_dead** informa, мертва ли лошадь.

## Valores de retorno
### is_dead
Tipo *boolean*. Мертва ли лошадь ou нет. `true`, se мертва, иначе `false`.

## Notas
A função **não** pode ser chamada anonimamente.

Функция абсолютно идентична следующему коду:

````lua
local is_dead = horse.get_health() < 0
````