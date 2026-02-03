# arena.get_duel_list()
A função **arena.get_duel_list** informa список дуэлянтов.

## Valores de retorno
### duel_list
Tipo *table*. Возвращается индексированная таблица. Каждый индекс в таблице &mdash; это тоже индексированные таблицы, которые содержат 5 элементов. Представить возвращаемое значение можно так:

```lua
{
	{name1, name2, map_index, x, y},
	-- ...
}
```

* `name1` <sup>string</sup> &mdash; имя первого дуэлянта;
* `name2` <sup>string</sup> &mdash; имя второго дуэлянта;
* `map_index` <sup>number</sup> &mdash; индекс локации, onde происходит поединок;
* `x` <sup>number</sup> &mdash; серверная координата no eixo X, куда следует телепортировать наблюдателя (sem os dois zeros no final)
* `y` <sup>number</sup> &mdash; серверная координата no eixo Y, куда следует телепортировать наблюдателя (sem os dois zeros no final).

Se никто не сражается на арене, então возвращаемое значение равно пустой таблице, т.е. `{}`.

## Notas
A função pode ser chamada anonimamente.