# horse.get_grade()
A função **horse.get_grade** informa тип лошади у игрока.

## Valores de retorno
### horse_grade
Tipo *number*. Тип лошади. `1` &mdash; обычная лошадь; `2` &mdash; броневая лошадь (можно атаковать с коня); `3` &mdash; армейская лошадь (можно атаковать с коня и использовать навыки). `0`, se у игрока нет коня.

## Notas
A função **não** pode ser chamada anonimamente.

Эта функция аналогична следующему коду:

````lua
local grade = 0
if horse.get_level() > 0 then
	grade = math.floor(horse.get_level() / 10) + 1
end
````