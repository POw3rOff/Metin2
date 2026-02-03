# item.get_refine_materials()
A função **item.get_refine_materials** informa необходимые материалы для улучшения &laquo;выделенного&raquo; предмета.

## Valores de retorno
### materials
Tipo *mixed*. В случае, se предмет не был &laquo;выделен&raquo; ou se у предмета указан `refine_set`, которого нет в таблице `player.refine_proto`, então nada é retornado, ou seja `nil`.

В случае, se улучшение предмета стоит 0 янг и не требует никаких ресурсов, então é retornado `0` <sup>number</sup>.

В случае, se функция выполнилась без ошибок, então é retornado таблица, которая выглядит примерно вот так:

````lua
{
	["cost"] = refine_cost,
	["material_count"] = count_of_materials,
	["materials"] = {
		{material_vnum, count_of_this_material},
		{material_vnum, count_of_this_material},
		-- ...
	}
}
````

* `refine_cost` &mdash; стоимость улучшения в янгах;
* `count_of_materials` &mdash; количество разных материалов (например, se на улучшение предмета надо 8 костей и 3 волчьи шкуры, então этот параметр будет равен 2);
* `material_vnum` &mdash; vnum материала;
* `count_of_this_material` &mdash; количество этого самого материала.

## Notas
A função **não** pode ser chamada anonimamente.

Esta função funciona apenas com itens &laquo;selecionados&raquo;. Mais detalhes aqui: [item](../item).