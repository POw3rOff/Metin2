# building.get_land_info()
A função **building.get_land_info** informa информацию о земле гильдии.

## Parâmetros da função
### land_id
Tipo *number*. **Parâmetro obrigatório**. ID земли, информацию о ao qual необходимо получить.

## Valores de retorno
### price
Tipo *number*. Стоимость земли.

### guild_id
Tipo *number*. Владелец земли. Se землей никто не владеет, então значение будет равно `0`.

### level_limit
Tipo *number*. Минимальный уровень гильдии, необходимый для покупки земли.

## Notas
A função pode ser chamada anonimamente.

Изменять цену и минимальный уровень нужно в таблице `player.land`.

Возвращаемые значения являются опциональными для покупки земли гильдией. Это значит, что сервер не будет выдавать какой-либо ошибки, se гильдия, чей уровень ниже, чем возвращаемый параметр [level_limit](#level_limit), попытается купить землю через функцию [building.set_land_owner](../building/building.set_land_owner.md)(). Для этого надо использовать дополнительные проверки.