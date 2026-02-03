# __get_guild_priv()
A função **__get_guild_priv** informa количество процентов определенной квоты у определенной гильдии.

## Parâmetros da função
### guild_id
Tipo *number*. **Parâmetro obrigatório**. ID da guilda.

### priv_id
Tipo *number*. **Parâmetro obrigatório**. ID da quota. `1` &mdash; дроп; `2` &mdash; янги; `3` &mdash; большие кучки янг; `4` &mdash; опыт.

## Valores de retorno
### priv_value
Tipo *number*. Количество процентов квоты. Se один из параметров não for um número, se были заданы не все параметры ou se гильдия с заданным ID не была найдена, então é retornado `0`.

## Notas
A função pode ser chamada anonimamente.