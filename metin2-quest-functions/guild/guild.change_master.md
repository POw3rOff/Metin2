# guild.change_master()
Функция **guild.change_master** меняет лидера гильдии, в ao qual состоит игрок.

## Parâmetros da função
### player_name
Tipo *string*. **Parâmetro obrigatório**. Nome do jogador, который станет новым лидером гильдии.

## Valores de retorno
### status
Tipo *number*. Результат выполнения функции.

* `3`, se лидер гильдии был упсешно изменен;
* `0`, se параметр **player_name** не является строкой ou вообще não foi definido;
* `1`, se игрок, que chamou a função, не является лидером гильдии;
* `2`, se игрок, которому неободимо передать права лидера, не находится в гильдии;
* `4`, se игрок не состоит в гильдии.

## Notas
A função **não** pode ser chamada anonimamente.

Лучше использовать функцию [guild.change_master_with_limit](../guild/guild.change_master_with_limit.md)(), которая предоставляет больше настроек.