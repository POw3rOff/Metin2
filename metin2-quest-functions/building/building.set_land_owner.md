# building.set_land_owner()
Функция **building.set_land_owner** позволяет гильдии купить землю.

## Parâmetros da função
### land_id
Tipo *number*. **Parâmetro obrigatório**. ID земли гильдии, которую необходимо купить.

### guild_id
Tipo *number*. **Parâmetro obrigatório**. ID da guilda, которая станет владельцем земли.

## Notas
A função pode ser chamada anonimamente.

Параметр [guild_id](#guild_id) не может быть равен `0`.

Эта функция сработает только в том случае, se возвращаемый параметр [guild_id](../building/building.get_land_info.md#guild_id) функции [building.get_land_info](../building/building.get_land_info.md)() равен `0`.

Teoricamente, esta função pode ser executada mesmo que não seja pelo líder da guilda.