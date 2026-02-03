# horse.get_health_pct()
A função **horse.get_health_pct** informa количество здоровья (сытость) лошади.

## Valores de retorno
### health_pct
Tipo *number*. Количество процентов здоровья (сытости) у лошади. `100` &mdash; лошадь полностью сыта; `0` &mdash; лошадь мертва. Se у игрока нет лошади (se ее уровень равен `0`), então é retornado `0`.

## Notas
A função **não** pode ser chamada anonimamente.