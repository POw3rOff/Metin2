# d.setqf()
A função **d.setqf** define квестовый флаг всем участникам подземелья.

## Parâmetros da função
### flag_name
Tipo *string*. **Parâmetro obrigatório**. Nome da flag. Nome da flag не может быть длиннее максимально-por exemploой длины поля `szState` в таблице `player.quest`.

### value
Tipo *number*. **Parâmetro obrigatório**. Valor da flag.

## Notas
A função pode ser chamada anonimamente.

Квестовый флаг привязывается к названию квеста, в котором он был установлен. Это значит, чтобы получить, например, квестовый флаг, заданный na Torre dos Demónios, следует использовать такую конструкцию:

````lua
local value = pc.getf("deviltower_zone", "flag_name")
````

Se вы хотите узнать значение флага, находясь в квесте Башни Демонов, это можно сделать так:

````lua
local value = pc.getqf("flag_name")
````

Esta função funciona apenas em masmorras.