# __give_guild_priv()
A função **__give_guild_priv** define квоту всем членам определенной гильдии.

## Parâmetros da função
### guild_id
Tipo *number*. **Parâmetro obrigatório**. ID da guilda.

### priv_id
Tipo *number*. **Parâmetro obrigatório**. ID da quota. `1` &mdash; дроп; `2` &mdash; янги; `3` &mdash; большие кучки янг; `4` &mdash; опыт.

### priv_value
Tipo *number*. **Parâmetro obrigatório**. Qual a percentagem da quota que será definida. Valores superiores a `1000` serão provavelmente reduzidos para `1000`.

### priv_duration
Tipo *number*. **Parâmetro obrigatório**. Длительность квоты em segundos. Valores superiores a `604800` seg. (7 dias), serão provavelmente reduzidos para `604800` секунд.

## Notas
A função pode ser chamada anonimamente.

A quota desaparecerá após o reinício do servidor.