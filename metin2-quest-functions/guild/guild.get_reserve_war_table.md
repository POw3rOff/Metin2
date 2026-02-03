# guild.get_reserve_war_table()
A função **guild.get_reserve_war_table** informa список воюющих гильдий.

## Valores de retorno
### war_list
Tipo *table*. Список воюющих гильдий. Таблица выглядит примерно так:

````lua
{
	{war_id, winner, loser, handicap}, -- первая воюющая пара
	{war_id, winner, loser, handicap}, -- вторая воюющая пара
	-- и т.д.
}
````

* `war_id` <sup>number</sup> &mdash; уникальный ID войны;
* `winner` <sup>number</sup> &mdash; ID побеждающей гильдии;
* `loser` <sup>number</sup> &mdash; ID проигрывающей гильдии;
* `handicap` <sup>number</sup> &mdash; неизвестно, что это.

Se нет войн, então é retornado пустая таблица, ou seja `{}`.

## Notas
A função pode ser chamada anonimamente.