# guild.get_warp_war_list()
A função **guild.get_warp_war_list** informa список воюющих гильдий.

## Valores de retorno
### war_list
Tipo *table*. Список воюющих гильдий. Таблица выглядит примерно так:

````lua
{
	{guild1, guild2}, -- первая воюющая пара
	{guild1, guild2}, -- вторая воюющая пара
	-- и т.д.
}
````

В данном примере `guild1` <sup>number</sup> &mdash; ID первой гильдии, а `guild2` <sup>number</sup> &mdash; ID второй гильдии. Se нет войн, então é retornado пустая таблица, ou seja `{}`.

## Notas
A função pode ser chamada anonimamente.

Функция вернет что-então вроде такого:

````lua
{
	{1123, 5632},
	{6452, 4433}
}
````

Лучше использовать функцию [guild.get_reserve_war_table](../guild/guild.get_reserve_war_table.md)() &mdash; она retorna больше информации.