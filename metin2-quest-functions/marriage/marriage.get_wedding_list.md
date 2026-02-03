# marriage.get_wedding_list()
A função **marriage.get_wedding_list** informa список свадеб, которые происходят в данный момент.

## Valores de retorno
### wedding_list
Tipo *table*. Таблица, содержащая список свадеб. Таблица выглядит примерно так:

````lua
{
	{player1_id, player2_id, player1_name, player2_name},
	{player1_id, player2_id, player1_name, player2_name},
	-- etc
}
````

* `player1_id` <sup>number</sup> &mdash; ID первого игрока; 
* `player1_id` <sup>number</sup> &mdash; ID второго игрока; 
* `player1_name` <sup>string</sup> &mdash; имя первого игрока; 
* `player2_name` <sup>string</sup> &mdash; имя второго игрока.

## Notas
A função pode ser chamada anonimamente.